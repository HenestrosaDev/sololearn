#include <stdio.h>
#include <math.h>

int main()
{
    int houses;

    do
    {
        scanf("%d", &houses);
    }
    while (houses < 3);

    int bill_probability = ceil(100.0 / houses * 2);

    printf("%d", bill_probability);

    return 0;
}