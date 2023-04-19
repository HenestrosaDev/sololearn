#include <iostream>

int getEggsUsed(int numberOfCakes)
{
    if (numberOfCakes == 1)
    {
        return 1;
    }
    else
    {
        return numberOfCakes + getEggsUsed(numberOfCakes - 1);
    }
}

int main()
{
    int numberOfCakes;
    std::cin >> numberOfCakes;

    int eggsUsed = getEggsUsed(numberOfCakes);
    std::cout << eggsUsed;

    return 0;
}