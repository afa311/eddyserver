﻿#ifndef __AGENT_TYPES_H__
#define __AGENT_TYPES_H__

#include <vector>
#include <string>
#include <stdexcept>

typedef std::vector<char> ByteArray;

enum class ActionType
{
	kCall = 1,
	kSelect = 2,
	kInsert = 3,
	kUpdate = 4,
	kDelete = 5,
};

class ErrorCode
{
public:
	ErrorCode()
		: error_code_(0)
	{
	}

	ErrorCode(ErrorCode &&other)
	{
		error_code_ = other.error_code_;
		message_ = std::move(other.message_);
		other.error_code_ = 0;
	}

	ErrorCode& operator= (ErrorCode &&other)
	{
		error_code_ = other.error_code_;
		message_ = std::move(other.message_);
		other.error_code_ = 0;
		return *this;
	}

	int Value() const
	{
		return error_code_;
	}

	const char* Message() const
	{
		return message_.c_str();
	}

	void SetError(int error_code, const char *message)
	{
		error_code_ = error_code;
		message_ = message;
	}

	operator bool() const
	{
		return error_code_ != 0;
	}

private:
	int error_code_;
	std::string message_;
};

class NotConnected : public std::logic_error
{
public:
	NotConnected() : std::logic_error("database not connected") {}
};

class ConnectionError : public std::runtime_error
{
public:
	ConnectionError() : std::runtime_error("database connection error") {}
};

class NotFoundDatabase : public std::logic_error
{
public:
	NotFoundDatabase() : std::logic_error("database not found") {}
};

class ResourceInsufficiency : public std::runtime_error
{
public:
	ResourceInsufficiency() : std::runtime_error("system resource insufficiency") {}
};

#endif