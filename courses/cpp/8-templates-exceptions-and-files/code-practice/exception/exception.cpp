#include <iostream>

int main()
{
    std::string menu[] = {"fruits", "chicken", "fish", "cake"};
    try
    {
        int x;
        std::cin >> x;

        if (x >= 0 && x < 4)
        {
            std::cout << menu[x];
        }
        else
        {
            throw 404;
        }
    }
    catch(int x)
    {
        std::cout << x << " - not found";
    }
}