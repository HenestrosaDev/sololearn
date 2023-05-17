#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool containsPalindrome(char words[4][100])
{
    for (int i = 0; i < 4; i++)
    {
        int len = strlen(words[i]);
        bool isPalindrome = true;
        for (int j = 0; j < len / 2; j++)
        {
            if (words[i][j] != words[i][len - j - 1])
            {
                isPalindrome = false;
                break;
            }
        }

        if (isPalindrome)
        {
            return true;
        }
    }

    return false;
}

int main() {
    char words[4][100];
    for (int i = 0; i < 4; i++)
    {
        scanf("%s", words[i]);
    }

    if (containsPalindrome(words))
        printf("Open\n");
    else
        printf("Trash\n");

    return 0;
}