#include <stdio.h>
#include <string.h>

const char* decompress_text(const char* compressed_text)
{
    int decompressed_idx = 0;
    char* decompressed_text = malloc(100 * sizeof(char));

    int idx;
    for (idx = 1; idx < strlen(compressed_text); idx += 2)
    {
        char current_char = compressed_text[idx - 1];
        int repeat_count = compressed_text[idx] - '0';  // Convert character to integer
        int i;
        for (i = 0; i < repeat_count; i++)
        {
            decompressed_text[decompressed_idx] = current_char;
            decompressed_idx++;
        }
    }

    return decompressed_text;
}

int main()
{
    char compressed_text[100];
    scanf("%s", compressed_text);

    printf("%s", decompress_text(compressed_text));

    return 0;
}
