#include <iostream>
#include <string>

//complete the function
void add(int a, int b)
{
    std::cout << a + b << std::endl;
}

//overload it to sum doubles
void add(double a, double b)
{
    std::cout << a + b << std::endl;
}

int main()
{
    add(5,6);
    add(1.2, 6.5);

    return 0;
}