#include <iostream>

void toMinutes(int hours)
{
    std::cout << hours * 60;
}

int main()
{
    int hours;
    std::cin >> hours;
    toMinutes(hours);

    return 0;
}