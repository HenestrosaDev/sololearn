#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_password_strong(char* password)
{
    // Check if the password has at least 2 numbers, 2 special characters,
    // and a length of at least 7 characters
    int num_digits = 0, num_special_chars = 0, i;
    for (i = 0; i < strlen(password); i++)
    {
        if (isdigit(password[i]))
            num_digits++;
        else if (strchr("!@#$%&*", password[i]) != NULL)
            num_special_chars++;
    }

    bool is_strong = num_digits >= 2 && num_special_chars >= 2 && strlen(password) >= 7;
    return is_strong;
}

int main() {
    char password[100];
    fgets(password, sizeof(password), stdin);

    // Check if the password is strong or weak and print the result
    if (is_password_strong(password))
        printf("Strong\n");
    else
        printf("Weak\n");

    return 0;
}
