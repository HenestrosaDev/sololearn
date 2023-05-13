#include <iostream>
#include <cmath>
#include <string>

std::string to_rgb(float cyan, float magenta, float yellow, float key)
{
    int red = round(255 * (1 - cyan) * (1 - key));
    int green = round(255 * (1 - magenta) * (1 - key));
    int blue = round(255 * (1 - yellow) * (1 - key));
    return std::to_string(red) + "," + std::to_string(green) + "," + std::to_string(blue);
}

int main()
{
    float cyan, magenta, yellow, key;
    std::cin >> cyan >> magenta >> yellow >> key;

    std::cout << to_rgb(cyan, magenta, yellow, key);

    return 0;
}
