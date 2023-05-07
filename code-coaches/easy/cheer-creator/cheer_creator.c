#include <stdio.h>

int main() {
    int yards;
    scanf("%d", &yards);

    if (yards > 10)
    {
        printf("High Five");
    }
    else if (yards < 1)
    {
        printf("shh");
    }
    else
    {
        for (int i = 0; i < yards; i++)
        {
            printf("Ra!");
        }
    }

    return 0;
}