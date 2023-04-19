#include <iostream>

int main()
{
    int distance = 40;

    for (int i = 0; i < 5; i++)
    {
        std::cout << distance;
        distance += 40;
    }


    return 0;
}