#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char* to_snake_case(const char* camel_case_string)
{
    int length = strlen(camel_case_string);
    char* snake_case_string = (char*)malloc((length+1) * sizeof(char));
    int snake_case_index = 0;

    for (int i = 0; i < length; i++)
    {
        char current_char = camel_case_string[i];

        if (i != 0)
        {
            char previous_char = camel_case_string[i - 1];

            if ((isupper(current_char) && isalpha(previous_char))
                || (isalpha(current_char) && isdigit(previous_char)))
            {
                snake_case_string[snake_case_index++] = '_';
            }
        }

        snake_case_string[snake_case_index++] = tolower(current_char);
    }

    return snake_case_string;
}

int main()
{
    char camel_case_string[100];
    fgets(camel_case_string, sizeof(camel_case_string), stdin);

    printf("%s", to_snake_case(camel_case_string));

    return 0;
}
