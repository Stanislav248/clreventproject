#pragma once
#include "EventLogger.h"
#include <msclr/marshal_cppstd.h>

using namespace System;
using namespace msclr::interop;

public ref class EventLoggerWrapper
{
private:
    EventLogger* logger;

public:
    EventLoggerWrapper()
    {
        logger = new EventLogger();
    }

    void Log(std::string eventName)
    {
        logger->LogEvent(eventName);
    }

    void LogWithDate(std::string eventName)
    {
        logger->LogEventWithDate(eventName);
    }
};