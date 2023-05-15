#include <iostream>
#include <vector>

bool is_each_number_greater_than_the_sum(const std::vector<int>& nums)
{
    int sum = 0;
    for (int i = 1; i < nums.size(); i++)
    {
        sum += nums[i - 1];
        if (nums[i] <= sum)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int nums_length;
    std::cin >> nums_length;
    std::vector<int> nums(nums_length);
    for (int i = 0; i < nums_length; ++i)
    {
        std::cin >> nums[i];
    }

    if (is_each_number_greater_than_the_sum(nums))
        std::cout << "true";
    else
        std::cout << "false";

    return 0;
}
