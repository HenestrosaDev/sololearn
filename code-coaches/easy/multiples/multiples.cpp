#include <iostream>
#include <vector>

int sum_multiples(int num, std::vector<int> multiples)
{
    int sum_of_multiples = 0;
    for (int i = 0; i < num; i++)
    {
        for (int m : multiples)
        {
            if (m != 0 && i % m == 0)
            {
                sum_of_multiples += i;
                break;
            }
        }
    }
    return sum_of_multiples;
}

int main()
{
    int num;
    std::cin >> num;

    std::cout << sum_multiples(num, {3, 5});

    return 0;
}
