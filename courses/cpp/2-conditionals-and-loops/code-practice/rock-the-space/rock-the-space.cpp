#include <iostream>

int main()
{
    int vision;
    std::cin >> vision;

    int height;
    std::cin >> height;

    bool isVisionValid = vision == 100;
    bool isHeightValid = height >= 62 && height <= 75;

    if (isVisionValid && isHeightValid)
    {
        std::cout << "passed";
    }
    else
    {
        std::cout << "failed";
    }

	return 0;
}