#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_zip_code_valid(char *zip_code)
{
    int zip_code_int;
    if (sscanf(zip_code, "%d", &zip_code_int) == 1)
        return strlen(zip_code) == 5;
    else
        return false;
}

int main()
{
    char zip_code[10];
    fgets(zip_code, sizeof(zip_code), stdin);

    if (is_zip_code_valid(zip_code))
        printf("true");
    else
        printf("false");

    return 0;
}
