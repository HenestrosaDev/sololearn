#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <chrono>
#include <ctime>

int get_num_days_between(std::string from_str, std::string to_str)
{
    std::string date_format = "%B %d, %Y";

    std::tm from_date = {};
    std::istringstream from_stream(from_str);
    from_stream >> std::get_time(&from_date, date_format.c_str());

    std::tm to_date = {};
    std::istringstream to_stream(to_str);
    to_stream >> std::get_time(&to_date, date_format.c_str());

    std::chrono::system_clock::time_point from_point = std::chrono::system_clock::from_time_t(std::mktime(&from_date));
    std::chrono::system_clock::time_point to_point = std::chrono::system_clock::from_time_t(std::mktime(&to_date));

    std::chrono::duration<int, std::ratio<86400>> delta = std::chrono::duration_cast<std::chrono::duration<int, std::ratio<86400>>>(to_point - from_point);

    return delta.count();
}

int main()
{
    std::string from_str, to_str;
    getline(std::cin, from_str);
    getline(std::cin, to_str);

    std::cout << get_num_days_between(from_str, to_str);

    return 0;
}