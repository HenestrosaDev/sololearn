#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <regex.h>
#include <math.h>

#define MAX_LENGTH 10000

int main() {
    char words[MAX_LENGTH];
    fgets(words, MAX_LENGTH, stdin);

    int wordsNumber = 0;
    int totalLength = 0;

    regex_t regex;
    regmatch_t match[1];

    regcomp(&regex, "\\s+", REG_EXTENDED);
    char *word = strtok(words, " ");
    while (word != NULL) {
        wordsNumber++;
        for (int i = 0; i < strlen(word); i++) {
            if (isalpha(word[i])) {
                totalLength++;
            }
        }
        word = strtok(NULL, " ");
    }

    regfree(&regex);

    int averageLength = (int) ceil((1.0 * totalLength) / (1.0 * wordsNumber));
    printf("%d", averageLength);

    return 0;
}
