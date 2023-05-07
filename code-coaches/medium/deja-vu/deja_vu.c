#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void check_deja_vu(char chars[])
{
    char previousChar = ' ';
    bool isRepeated = false;

    for (int i = 0; i < strlen(chars); i++)
    {
        if (chars[i] == previousChar)
        {
            printf("Deja Vu");
            isRepeated = true;
            break;
        }
        else
        {
            previousChar = chars[i];
        }
    }

    if (!isRepeated)
    {
        printf("Unique");
    }
}

int main()
{
    char chars[101];
    scanf("%s", chars);

    check_deja_vu(chars);

    return 0;
}
