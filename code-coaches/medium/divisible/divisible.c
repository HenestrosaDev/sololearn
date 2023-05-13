#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool is_divisible_by_all(int num, int *dividers, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (num % dividers[i] != 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int num;
    scanf("%d", &num);

    char dividers_str[100];
    scanf("%s", dividers_str);

    char* token = strtok(dividers_str, " ");
    int dividers[100];

    int i = 0;
    while (token != NULL && i < 100) // check for NULL and fixed size
    {
        dividers[i] = atoi(token);
        i++;
        token = strtok(NULL, " ");
    }

    if (is_divisible_by_all(num, dividers, i))
        printf("divisible by all");
    else
        printf("not divisible by all");

    return 0;
}
