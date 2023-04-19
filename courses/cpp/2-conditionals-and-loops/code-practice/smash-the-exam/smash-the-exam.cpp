#include <iostream>

int main()
{
    double points;
    std::cin >> points;

    if (points >= 90)
    {
        std::cout << "pass";
    }
    else
    {
        std::cout << "fail";
    }

    return 0;
}