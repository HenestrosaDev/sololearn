#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <regex.h>
#include <math.h>

#define MAX_LENGTH 10000

int get_average_word_length(char words[])
{
    int words_number = 0;
    int total_length = 0;

    regex_t regex;
    regmatch_t match[1];

    regcomp(&regex, "\\s+", REG_EXTENDED);
    char *word = strtok(words, " ");
    while (word != NULL) {
        words_number++;
        for (int i = 0; i < strlen(word); i++) {
            if (isalpha(word[i])) {
                total_length++;
            }
        }
        word = strtok(NULL, " ");
    }

    regfree(&regex);

    int average_length = (int) ceil((1.0 * total_length) / (1.0 * words_number));
    return average_length;
}

int main() {
    char words[MAX_LENGTH];
    fgets(words, MAX_LENGTH, stdin);

    printf("%d", get_average_word_length(words));

    return 0;
}
