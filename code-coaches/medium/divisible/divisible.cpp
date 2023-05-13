#include <iostream>
#include <vector>

bool is_divisible_by_all(int num, std::vector<int> dividers)
{
    for (int divider : dividers)
    {
        if (num % divider != 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int num;
    std::cin >> num;

    std::vector<int> dividers;
    int divider;
    while (std::cin >> divider)
    {
        dividers.push_back(divider);
    }

    if (is_divisible_by_all(num, dividers))
        std::cout << "divisible by all";
    else
        std::cout << "not divisible by all";

    return 0;
}
