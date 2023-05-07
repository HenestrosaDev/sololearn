#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* get_cheer(int yards)
{
    if (yards > 10)
    {
        return "High Five";
    }
    else if (yards < 1)
    {
        return "shh";
    }
    else
    {
        char* output = (char*)malloc(yards * 3 + 1);
        memset(output, 0, yards * 3 + 1);
        for (int i = 0; i < yards; i++)
        {
            strcat(output, "Ra!");
        }
        return output;
    }
}

int main()
{
    int yards;
    scanf("%d", &yards);

    printf("%s", get_cheer(yards));

    return 0;
}
