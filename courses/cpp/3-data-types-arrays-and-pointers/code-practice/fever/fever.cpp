#include <iostream>

int main()
{
    double temperature;
    std::cin >> temperature;

    if (temperature > 36.1 && temperature < 36.9)
    {
        std::cout << "OK";
    }
    else
    {
        std::cout << "Not OK";
    }

    return 0;
}