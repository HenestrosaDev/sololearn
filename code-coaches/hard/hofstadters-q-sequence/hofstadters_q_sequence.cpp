#include <iostream>

int q_sequence(int n)
{
    if (n <= 2)
        return 1;
    else
        return q_sequence(n - q_sequence(n - 1)) + q_sequence(n - q_sequence(n - 2));
}

int main()
{
    int n;
    std::cin >> n;

    std::cout << q_sequence(n) << std::endl;

    return 0;
}
