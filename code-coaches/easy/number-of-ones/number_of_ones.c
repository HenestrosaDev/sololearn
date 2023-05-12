#include <stdio.h>

int get_num_of_ones_in_bin(int num)
{
    int num_of_ones_in_bin = 0;
    while (num > 0)
    {
        if (num % 2 == 1)
            num_of_ones_in_bin++;

        num /= 2;
    }
    return num_of_ones_in_bin;
}

int main() {
    int num;
    scanf("%d", &num);

    printf("%d", get_num_of_ones_in_bin(num));

    return 0;
}
