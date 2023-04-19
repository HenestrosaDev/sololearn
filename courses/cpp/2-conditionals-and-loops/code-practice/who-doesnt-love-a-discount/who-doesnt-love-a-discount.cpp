#include <iostream>

int main()
{
    int purchaseAmount = 0;
    double totalPrice;

    do
    {
        std::cin >> totalPrice;
        double discountedPrice = totalPrice * 0.15;
        std::cout << discountedPrice << std::endl;
        purchaseAmount++;
    }
    while (purchaseAmount < 3);

    return 0;
}