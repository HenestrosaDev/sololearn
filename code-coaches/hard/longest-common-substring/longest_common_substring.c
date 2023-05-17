#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* get_longest_common_substring(char** words, int num_words)
{
    char* shortest_word = words[0];
    int shortest_length = strlen(shortest_word);
    char* longest_substring = NULL;

    // Iterate over all possible substrings of the shortest word
    for (int start = 0; start < shortest_length; start++)
    {
        for (int end = start + 1; end <= shortest_length; end++)
        {
            int substring_length = end - start;
            char* substring = malloc((substring_length + 1) * sizeof(char));
            strncpy(substring, shortest_word + start, substring_length);
            substring[substring_length] = '\0';

            // Check if the substring exists in all other words
            int is_common_substring = 1;
            for (int i = 1; i < num_words; i++)
            {
                if (strstr(words[i], substring) == NULL)
                {
                    is_common_substring = 0;
                    break;
                }
            }

            if (is_common_substring)
            {
                // Update the longest common substring if a longer one is found
                if (longest_substring == NULL || strlen(substring) > strlen(longest_substring))
                {
                    free(longest_substring);
                    longest_substring = strdup(substring);
                }
                // If there are multiple longest substrings, return the smallest one in alphabetical order
                else if (strlen(substring) == strlen(longest_substring) && strcmp(substring, longest_substring) < 0)
                {
                    free(longest_substring);
                    longest_substring = strdup(substring);
                }
            }

            free(substring);
        }
    }

    return longest_substring;
}

int main()
{
    char input[1000];
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';

    int num_words = 1;
    for (int i = 0; i < strlen(input); i++)
    {
        if (input[i] == ' ')
            num_words++;
    }

    char** words = malloc(num_words * sizeof(char*));
    char* word = strtok(input, " ");
    int i = 0;
    while (word != NULL)
    {
        words[i] = strdup(word);
        word = strtok(NULL, " ");
        i++;
    }

    printf("%s\n", get_longest_common_substring(words, num_words));

    for (int i = 0; i < num_words; i++)
    {
        free(words[i]);
    }
    free(words);

    return 0;
}
