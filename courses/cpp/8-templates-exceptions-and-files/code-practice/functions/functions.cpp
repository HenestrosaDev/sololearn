#include <iostream>

template <class T>
T myMax(T a, T b)
{
    return (a > b) ? a : b;
}

int main () {
    double x, y;
    std::cin >> x >> y;

    int a, b;
    std::cin >> a >> b;

    std::cout << myMax(x, y) << std::endl;
    std::cout << myMax(a, b) << std::endl;
}