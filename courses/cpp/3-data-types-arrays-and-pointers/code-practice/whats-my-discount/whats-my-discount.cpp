#include <iostream>

int main()
{
    double items[] = {500, 12.4, 94, 45, 3, 81, 1000.9, 85, 90, 1, 35};

    int discountPercent;
    std::cin >> discountPercent;

    for (double price : items)
    {
        double discountedPrice = price - price * discountPercent / 100;
        std::cout << discountedPrice << " ";
    }

    return 0;
}
