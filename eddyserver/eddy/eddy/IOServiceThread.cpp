﻿#include "IOServiceThread.h"
#include <iostream>

namespace eddy
{
	IOServiceThread::IOServiceThread(IOThreadID id, IOServiceThreadManager &manager)
		: work_(nullptr)
		, thread_id_(id)
		, manager_(manager)
	{

	}

	IOServiceThread::~IOServiceThread()
	{

	}

	void IOServiceThread::Run()
	{
		if (work_ == nullptr)
		{
			work_.reset(new asio::io_service::work(io_service_));
		}

		asio::error_code error;
		io_service_.run(error);

		if (error)
		{
			std::cerr << error.message() << std::endl;
		}
	}

	void IOServiceThread::RunThread()
	{
		if (thread_ == nullptr)
		{
			thread_.reset(new std::thread(std::bind(&IOServiceThread::Run, this)));
		}
	}

	void IOServiceThread::Join()
	{
		if (thread_ != nullptr)
		{
			thread_->join();
		}
	}

	void IOServiceThread::Stop()
	{
		if (work_ != nullptr)
		{
			work_.reset();
		}
	}
}