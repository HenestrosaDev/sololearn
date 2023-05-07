#include <stdio.h>

int main()
{
    int criminals;
    scanf("%d", &criminals);

    if (criminals < 5)
    {
        printf("I got this!");
    }
    else if (5 <= criminals && criminals <= 10)
    {
        printf("Help me Batman");
    }
    else
    {
        printf("Good Luck out there!");
    }

    return 0;
}