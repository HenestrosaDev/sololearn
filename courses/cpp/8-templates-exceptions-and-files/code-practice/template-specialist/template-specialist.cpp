#include <iostream>

template <class T>
class Div
{
    public:
        Div (T x, T y)
        {
            std::cout << x / y << std::endl;
        }
};

template <>
class Div<std::string>
{
    public:
        Div (std::string x, std::string y)
        {
            std::cout << x.length() / y.length() << std::endl;
        }
};


int main ()
{
    std::string a, b;
    std::cin >> a >> b;

    int x, y;
    std::cin >> x >> y;

    Div<std::string> d2(a, b);
    Div<int> d1(x, y);
}