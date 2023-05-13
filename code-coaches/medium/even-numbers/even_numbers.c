#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* get_evens_str(char* nums_str)
{
    char *num_str = strtok(nums_str, " ");
    char *even_nums_str = malloc(strlen(nums_str) + 1);
    while (num_str != NULL)
    {
        int num = atoi(num_str);
        if (num % 2 == 0)
        {
            strcat(even_nums_str, num_str);
            strcat(even_nums_str, " ");
        }
        num_str = strtok(NULL, " ");
    }
    even_nums_str[strlen(even_nums_str) - 1] = '\0'; // remove the extra space at the end

    return even_nums_str;
}

int main()
{
    char nums_str[1000];
    fgets(nums_str, 1000, stdin);

    printf("%s", get_evens_str(nums_str));

    return 0;
}
