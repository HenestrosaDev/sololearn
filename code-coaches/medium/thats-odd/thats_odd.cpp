#include <iostream>
#include <vector>

int sum_even_numbers(std::vector<int> numbers)
{
    int sum = 0;
    for (int num : numbers)
    {
        if (num % 2 == 0)
            sum += num;
    }

    return sum;
}

int main()
{
    int numbers_num;
    std::cin >> numbers_num;
    std::vector<int> numbers(numbers_num);

    for (int i = 0; i < numbers_num; i++)
    {
        std::cin >> numbers[i];
    }

    std::cout << sum_even_numbers(numbers);

    return 0;
}
