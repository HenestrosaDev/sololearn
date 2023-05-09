#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_digit(char c)
{
    return c >= '0' && c <= '9';
}

const char* replace_numbers_with_words(char sentence[])
{
    char* words[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};
    char* output = malloc(100);

    // loop over the input string and replace numerals with words
    int i = 0;
    while (i < strlen(sentence)) {
        if (is_digit(sentence[i]))
        {
            int num = 0;
            while (is_digit(sentence[i]))
            { // keep reading digits until non-digit is found
                num = num * 10 + (sentence[i] - '0'); // convert the digit characters to an integer
                i++;
            }

            if (num >= 0 && num <= 10)
            {
                strcat(output, words[num]); // print the corresponding word if the number is between 0 and 10
            }
            else
            {
                char num_str[20];
                sprintf(num_str, "%d", num); // convert the number to a string
                strcat(output, num_str); // append the string representation of the number
            }
        }
        else
        {
            char temp[2] = {sentence[i], '\0'}; // create a temporary string with the character and null terminator
            strcat(output, temp); // append the temporary string
            i++;
        }
    }

    return output;
}

int main()
{
    char sentence[100];
    fgets(sentence, 100, stdin); // read the input string

    char* output = replace_numbers_with_words(sentence);
    printf("%s", output);
    free(output);

    return 0;
}
