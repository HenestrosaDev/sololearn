#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool does_sentence_flow(const char* sentence)
{
    char words[100][100];
    int word_count = 0;

    char* word = strtok((char*)sentence, " ");
    while (word != NULL)
    {
        strcpy(words[word_count], word);
        word_count++;
        word = strtok(NULL, " ");
    }

    for (int i = 1; i < word_count; ++i)
    {
        if (words[i][0] != words[i - 1][strlen(words[i - 1]) - 1])
        {
            return false;
        }
    }
  return true;
}

int main()
{
    char sentence[1000];
    fgets(sentence, 1000, stdin);

    if (does_sentence_flow(sentence))
        printf("true");
    else
        printf("false");

    return 0;
}
