#include <stdio.h>
#include <math.h>

int main()
{
    int fruit;
    scanf("%d", &fruit);

    int apples = fruit / 2;
    int pies = floor(apples / 3);

    printf("%d", pies);

    return 0;
}