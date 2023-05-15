#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* split_string(const char *word, int size, char separator)
{
    int length = strlen(word);
    int num_parts = length / size;
    int leftover = length % size;

    // Calculate the total length of the resulting string
    int result_length = num_parts * (size + 1) + leftover + 1;

    // Allocate memory for the resulting string
    char *result = (char*) malloc(result_length * sizeof(char));
    if (result == NULL) 
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    int i, j, k;
    k = 0;

    for (i = 0; i < length - size; i += size) 
    {
        // Copy each part followed by a hyphen
        for (j = 0; j < size; j++) 
        {
            result[k++] = word[i + j];
        }
        result[k++] = separator;
    }

    // Copy the leftover part
    for (; i < length; i++) 
    {
        result[k++] = word[i];
    }

    return result;
}

int main() 
{
    char word[100];
    int size;
    scanf("%s%d", word, &size);

    printf("%s", split_string(word, size, '-'));

    return 0;
}
