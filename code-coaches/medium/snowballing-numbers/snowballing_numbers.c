#include <stdio.h>
#include <stdbool.h>


bool is_each_number_greater_than_the_sum(int nums[], int length)
{
    int sum = 0;
    for (int i = 1; i < length; i++)
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
    scanf("%d", &nums_length);

    int nums[nums_length];
    for (int i = 0; i < nums_length; i++)
    {
        scanf("%d", &nums[i]);
    }

    if (is_each_number_greater_than_the_sum(nums, nums_length))
        printf("true");
    else
        printf("false");

    return 0;
}
