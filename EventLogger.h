#pragma once
#include <string>

class EventLogger
{
public:
    EventLogger() = default;

    void LogEvent(std::string eventName);

    void LogEventWithDate(std::string eventName);
};