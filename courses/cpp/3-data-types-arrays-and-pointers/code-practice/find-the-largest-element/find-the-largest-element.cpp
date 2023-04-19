#include <iostream>

int main()
{
    int arraySize;
    std::cin >> arraySize;

    int *nums = new int[arraySize];
    for (int i = 0; i < arraySize; i++)
    {
        std::cin >> nums[i];
    }

    int max = nums[0];
    for (int i = 0; i < arraySize; i++)
    {
        if(nums[i]>max)
        {
            max = nums[i];
        }
    }

    std::cout << max;

    return 0;
}