#include <stdio.h>
#include <string.h>
#include <ctype.h>

char* remove_symbols(char* encoded)
{
    // symbols: a char that is not alphanumeric or a space
    char* decoded = (char*) malloc(sizeof(char) * strlen(encoded) + 1);
    int j = 0;
    for (int i = 0; i < strlen(encoded); i++)
    {
        if (isspace(encoded[i]) || isalnum(encoded[i]))
            decoded[j++] = encoded[i];
    }
    decoded[j] = '\0';
    return decoded;
}

int main()
{
    char encoded[1000];
    fgets(encoded, sizeof(encoded), stdin);

    char* decoded = remove_symbols(encoded);
    printf("%s", decoded);
    free(decoded);

    return 0;
}
