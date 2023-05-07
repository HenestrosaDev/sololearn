#include <stdio.h>

int get_apple_pies(int fruit_count)
{
    int apple_count = fruit_count / 2;
    return apple_count / 3;
}

int main()
{
    int fruit_count;
    scanf("%d", &fruit_count);

    printf("%d", get_apple_pies(fruit_count));

    return 0;
}