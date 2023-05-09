#include <stdio.h>
#include <ctype.h>
#include <string.h>

char* encode_message(char* message)
{
    char* text_inverted_ascii = (char*) malloc(strlen(message) + 1);
    int ascii_lowercase_a = 97;
    int ascii_lowercase_z = 122;

    for (int i = 0; i < strlen(message); i++)
    {
        char character = message[i];

        if (isalpha(character))
        {
            text_inverted_ascii[i] = ascii_lowercase_z - tolower(character) + ascii_lowercase_a;
        }
        else
        {
            text_inverted_ascii[i] = character;
        }
    }

    return text_inverted_ascii;
}

int main()
{
    char message[100];
    fgets(message, 100, stdin);

    char* encoded_message = encode_message(message);
    printf("%s", encoded_message);
    free(encoded_message);

    return 0;
}
