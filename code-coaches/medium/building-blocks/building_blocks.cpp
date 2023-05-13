#include <iostream>

int main()
{
    const int num_students = 15;
    int num_blocks = 0;
    for (int i = 0; i < 4; ++i)
    {
        int input;
        std::cin >> input;
        num_blocks += input;
    }

    std::cout << num_blocks % num_students << std::endl;

    return 0;
}
