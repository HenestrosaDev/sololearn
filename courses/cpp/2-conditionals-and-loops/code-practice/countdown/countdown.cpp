#include <iostream>

int main()
{
    int seconds;
    std::cin >> seconds;

    while (seconds >= 0)
    {
        std::cout << seconds << std::endl;
        seconds--;
    }

    return 0;
}