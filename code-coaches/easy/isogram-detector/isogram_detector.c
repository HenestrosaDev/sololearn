#include <stdio.h>
#include <string.h>

int is_isogram(const char* word)
{
    // Use an array to keep track of the frequency of each character in the word
    // Then check if any character appears more than once
    int freq[256] = {0};  // assuming ASCII encoding
    for (int i = 0; word[i] != '\0'; ++i)
    {
        int c = (unsigned char) word[i];  // convert char to unsigned char to handle negative values
        if (freq[c] > 0)
            return 0;
        else
            ++freq[c];
    }
    return 1;
}

int main()
{
    char word[101];
    fgets(word, sizeof(word), stdin);

    if (is_isogram(word))
        printf("true");
    else
        printf("false");

    return 0;
}
