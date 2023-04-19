#include <iostream>
#include <cstdlib>

int main()
{
    srand(0);
    int range;
    std::cin >> range;

    for (int i = 0; i < 4; i++)
    {
        int randomNumber = 1 + rand() % range;
        std::cout << randomNumber;
    }

    return 0;
}
