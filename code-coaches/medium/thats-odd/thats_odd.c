#include <stdio.h>

int sum_even_numbers(int numbers[], int length)
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        if (numbers[i] % 2 == 0)
            sum += numbers[i];
    }

    return sum;
}

int main()
{
    int length;
    scanf("%d", &length);

    int numbers[length];
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &numbers[i]);
    }

    printf("%d", sum_even_numbers(numbers, length));

    return 0;
}
