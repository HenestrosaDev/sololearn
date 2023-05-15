#include <stdio.h>
#include <stdlib.h>

int* get_missing_numbers_in_sequence(const int* nums, int length, int* result_length)
{
    int min_num = nums[0];
    int max_num = nums[0];
    int i, j, k = 0;

    // Find the minimum and maximum numbers
    for (i = 0; i < length; i++)
    {
        if (nums[i] < min_num)
            min_num = nums[i];

        if (nums[i] > max_num)
            max_num = nums[i];
    }

    // Create an array to store missing numbers
    int* missing_nums = malloc((max_num - min_num - 1) * sizeof(int));

    // Check for missing numbers
    for (j = min_num + 1; j < max_num; j++)
    {
        int found = 0;
        for (i = 0; i < length; i++)
        {
            if (nums[i] == j)
            {
                found = 1;
                break;
            }
        }

        if (!found)
        {
            missing_nums[k] = j;
            k++;
        }
    }

    // Update the length of the result array
    *result_length = k;

    return missing_nums;
}

int main()
{
    int list_length, i;
    scanf("%d", &list_length);

    int* nums = malloc(list_length * sizeof(int));
    for (i = 0; i < list_length; i++)
    {
        scanf("%d", &nums[i]);
    }

    int result_length;
    int* missing_numbers = get_missing_numbers_in_sequence(nums, list_length, &result_length);

    for (i = 0; i < result_length; i++)
    {
        printf("%d ", missing_numbers[i]);
    }

    free(nums);
    free(missing_numbers);

    return 0;
}
