#include <stdio.h>
#include <string.h>

void reverse(char* str)
{
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++)
    {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}

int main()
{
    char text[100];
    scanf("%s", text);

    reverse(text);
    printf("%s\n", text);

    return 0;
}