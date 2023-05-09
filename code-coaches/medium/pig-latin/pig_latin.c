#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LENGTH 100 // maximum length of input sentence

char* to_pig_latin(char sentence[]) {
    char word[MAX_LENGTH]; // to store each word of the sentence
    int i, j, word_index, sentence_length;
    char* result = (char*) malloc(MAX_LENGTH * sizeof(char)); // allocate memory for the result

    sentence_length = strlen(sentence);
    for (i = 0, j = 0; i <= sentence_length; i++) {
        // if space or end of sentence is encountered, extract the word and convert to Pig Latin
        if (sentence[i] == ' ' || sentence[i] == '\0') {
            word[j] = '\0';

            word_index = 0;
            while (word[word_index] != '\0') {
                sprintf(result, "%s%c", result, word[word_index + 1]);
                word_index++;
            }
            sprintf(result, "%s%cay ", result, word[0]);
            j = 0; // reset the index for next word
        } else {
            word[j++] = sentence[i];
        }
    }

    return result;
}

int main() {
    char sentence[MAX_LENGTH];
    fgets(sentence, MAX_LENGTH, stdin);

    char* pig_latin_translation = to_pig_latin(sentence);
    printf("%s", pig_latin_translation);
    free(pig_latin_translation); // free the memory allocated for the result

    return 0;
}
