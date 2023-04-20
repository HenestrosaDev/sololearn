#include <iostream>

template <class T, class U>
T myMax(T a, U b)
{
    return (a > b) ? a : b;
}

int main ()
{
    double x;
    int y;
    std::cin >> x >> y;

    std::cout << myMax(x, y) << std::endl;
}