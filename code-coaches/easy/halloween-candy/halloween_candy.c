#include <stdio.h>
#include <math.h>

int main()
{
    int num_houses;

    do
    {
        scanf("%d", &num_houses);
    }
    while (num_houses < 3);

    int bill_probability = ceil(100.0 / num_houses * 2);

    printf("%d", bill_probability);

    return 0;
}