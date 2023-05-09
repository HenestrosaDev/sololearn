#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverse_string(char *str)
{
    int n = strlen(str);

    // Swap character starting from two corners
    for (int i = 0; i < n / 2; i++)
    {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
}

char* decode_message(char *message)
{
    char decoded_message[1000];
    int i = 0, j = 0;

    while (message[i] != '\0')
    {
        if (isspace(message[i]) || isalpha(message[i]))
        {
            decoded_message[j] = message[i];
            j++;
        }
        i++;
    }

    decoded_message[j] = '\0';
    reverse_string(decoded_message);

    char *result = malloc((j+1) * sizeof(char));
    strcpy(result, decoded_message);

    return result;
}

int main()
{
    char encoded_message[1000];
    fgets(encoded_message, 1000, stdin);

    char *decoded_message = decode_message(encoded_message);
    printf("%s", decoded_message);
    free(decoded_message);

    return 0;
}
