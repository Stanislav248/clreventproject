#include "EventLogger.h"
#include <fstream>
#include <chrono>
#include <ctime>
#include <sstream>
#include <iomanip>
#include <string>

void EventLogger::LogEvent(std::string eventName)
{
    std::ofstream file("Events.txt", std::ios::app);
    if (file.is_open()) {
        file << eventName + "\n";
        file.close();
    }
}

void EventLogger::LogEventWithDate(std::string eventName)
{
        auto now = std::chrono::system_clock::now();
        auto in_time_t = std::chrono::system_clock::to_time_t(now);

        std::stringstream ss;
        ss << std::put_time(std::localtime(&in_time_t), "%Y-%m-%d %X");
        
        std::string dateTime = ss.str(); // obvious googling since I am pretty sure we did NOT learn how to get the current dateTime

    std::ofstream file("EventsWithDate.txt", std::ios::app);
    if (file.is_open()) {
        file << eventName + ", " + dateTime + "\n";
        file.close();
    }
}