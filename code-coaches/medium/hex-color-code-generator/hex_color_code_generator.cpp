#include <iostream>
#include <iomanip>
#include <sstream>

std::string rgb_to_hex(int r, int g, int b)
{
    // Convert each RGB value to a two-digit hex string
    std::stringstream ss;
    ss << '#' << std::hex << std::setfill('0')
       << std::setw(2) << r
       << std::setw(2) << g
       << std::setw(2) << b;

    // Get the hex code string from the stringstream
    std::string hex_code = ss.str();
    return hex_code;
}

int main()
{
    int r_rgb, g_rgb, b_rgb;
    std::cin >> r_rgb >> g_rgb >> b_rgb;

    std::cout << rgb_to_hex(r_rgb, g_rgb, b_rgb);

    return 0;
}
