#include <chrono>
#include <ctime>
#include <iomanip>
#include <iostream>

template<class... Args>
void log(Args... args)
{
    time_t actualTime = time(NULL);

    auto timestamp = std::put_time(gmtime(&actualTime), "%Y-%m-%d %H:%M:%S");
    std::cout << "[" << timestamp<< "] ";
    (std::cout << ... << args) << std::endl;
}

// void log(const std::string & text) {
//     std::cout << std::chrono::system_clock::now() << text << std::endl;
// }
