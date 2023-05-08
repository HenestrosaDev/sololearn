#include <iostream>
#include <sstream>
#include <iomanip>

std::string convert_from_12h_to_24h(std::string time_12h) {
    int hour, minute;
    char indicator;

    // parse input string using stringstream
    std::istringstream ss(time_12h);
    ss >> hour;
    ss.ignore(); // ignore the colon separator
    ss >> minute >> indicator;

    // convert hour to 24-hour format
    if (indicator == 'P' && hour != 12)
        hour += 12;
    else if (indicator == 'A' && hour == 12)
        hour = 0;

    // format output string
    std::ostringstream oss;
    oss << std::setfill('0') << std::setw(2) << hour << ":" << std::setw(2) << minute;

    return oss.str();
}

int main() {
    std::string time_12h;
	getline(std::cin, time_12h);

    std::cout << convert_from_12h_to_24h(time_12h); // prints "13:15"

    return 0;
}