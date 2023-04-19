#include <iostream>

int main()
{
    int choice = 0;
    std::cin >> choice;

    switch (choice)
    {
        case 1:
            std::cout << "Latte";
            break;

        case 2:
            std::cout << "Americano";
            break;

        case 3:
            std::cout << "Espresso";
            break;

        case 4:
            std::cout << "Cappuccino";
            break;

        case 5:
            std::cout << "Macchiato";
            break;
    }

    return 0;
}