#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

std::vector<int> get_missing_numbers_in_sequence(const std::vector<int>& nums)
{
    std::vector<int> missing_nums;
    int min_num = *std::min_element(nums.begin(), nums.end());
    int max_num = *std::max_element(nums.begin(), nums.end());

    for (int num = min_num + 1; num < max_num; num++)
    {
        if (std::find(nums.begin(), nums.end(), num) == nums.end())
        {
            missing_nums.push_back(num);
        }
    }

    return missing_nums;
}

int main()
{
    int list_length;
    std::cin >> list_length;

    std::vector<int> nums(list_length);
    for (int i = 0; i < list_length; i++)
    {
        std::cin >> nums[i];
    }

    std::vector<int> missing_numbers = get_missing_numbers_in_sequence(nums);

    std::ostringstream oss;
    for (int num : missing_numbers)
    {
        oss << num << " ";
    }
    std::string missing_numbers_str = oss.str();

    std::cout << missing_numbers_str;

    return 0;
}
