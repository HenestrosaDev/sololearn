#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <ctime>

std::string get_day_of_week(std::string date_string)
{
    std::tm date;
    std::istringstream ss(date_string);

    ss >> std::get_time(&date, "%m/%d/%Y");
    if (ss.fail())
    {
        ss.clear();
        ss.str(date_string);
        ss >> std::get_time(&date, "%B %d, %Y");
    }

    char day[10];
    std::strftime(day, sizeof(day), "%A", &date);

    return std::string(day);
}

int main()
{
    std::string date_string;
    std::getline(std::cin, date_string);

    std::cout << get_day_of_week(date_string);

    return 0;
}
