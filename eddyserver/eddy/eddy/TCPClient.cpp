﻿#include "TCPClient.h"
#include <iostream>
#include "TCPSession.h"
#include "IOServiceThread.h"
#include "TCPSessionHandle.h"
#include "IOServiceThreadManager.h"

namespace eddy
{
	TCPClient::TCPClient(IOServiceThreadManager &io_thread_manager,
		const SessionHandlerCreator &handler_creator,
		const MessageFilterCreator &filter_creator)
		: io_thread_manager_(io_thread_manager)
		, session_handler_creator_(handler_creator)
		, message_filter_creator_(filter_creator)
	{

	}

	asio::io_service& TCPClient::IOService()
	{
		return io_thread_manager_.MainThread()->IOService();
	}

	void TCPClient::AsyncConnect(asio::ip::tcp::endpoint &endpoint)
	{
		SessionPointer session_ptr = std::make_shared<TCPSession>(io_thread_manager_.Thread(), message_filter_creator_());
		session_ptr->Socket().async_connect(endpoint, std::bind(&TCPClient::HandleConnect, this, session_ptr, std::placeholders::_1));
	}

	void TCPClient::Connect(asio::ip::tcp::endpoint &endpoint, asio::error_code &error_code)
	{
		SessionPointer session_ptr = std::make_shared<TCPSession>(io_thread_manager_.Thread(), message_filter_creator_());
		session_ptr->Socket().connect(endpoint, error_code);
		HandleConnect(session_ptr, error_code);
	}

	void TCPClient::HandleConnect(SessionPointer session_ptr, asio::error_code error_code)
	{
		if (error_code)
		{
			std::cerr << error_code.message() << std::endl;
			return;
		}
		SessionHandlerPointer handle_ptr = session_handler_creator_();
		io_thread_manager_.OnSessionConnect(session_ptr, handle_ptr);
	}
}