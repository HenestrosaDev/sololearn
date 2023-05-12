#include <stdio.h>
#include <string.h>
#include <ctype.h>

int get_vowels_count(const char* sentence) {
    const char* vowels = "aeiou";
    int count = 0;
    int sentence_length = strlen(sentence);

    for (int i = 0; i < sentence_length; i++)
    {
        char c = tolower(sentence[i]);
        if (strchr(vowels, c) != NULL)
            count++;
    }

    return count;
}

int main()
{
    char sentence[1000];
    fgets(sentence, sizeof(sentence), stdin);

    printf("%d\n", get_vowels_count(sentence));

    return 0;
}
