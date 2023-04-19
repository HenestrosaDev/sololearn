#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int arraySize;
    std::cin >> arraySize;

    std::vector<int> nums(arraySize);
    for (int i = 0; i < arraySize; i++)
    {
        std::cin >> nums[i];
    }

    int max = *std::max_element(nums.begin(), nums.end());

    std::cout << max;

    return 0;
}