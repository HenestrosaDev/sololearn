#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool does_pass_luhn_algorithm(const char* cc_num) {
    // Step 1: Reverse the credit card number
    int len = strlen(cc_num);
    char reversed_cc_num[len + 1];
    for (int i = 0; i < len; i++)
    {
        reversed_cc_num[i] = cc_num[len - i - 1];
    }

    int total_sum = 0;
    for (int i = 0; i < len; i++)
    {
        int digit = reversed_cc_num[i] - '0';
        // Step 2: Multiply every second digit by 2
        if (i % 2 == 1)
        {
            digit *= 2;
            // Step 3: Subtract 9 from all numbers higher than 9
            if (digit > 9) {
                digit -= 9;
            }
        }
        // Step 4: Add all the digits together
        total_sum += digit;
    }

    // Step 5: Modulo 10 of that sum should be equal to 0
    return total_sum % 10 == 0;
}

bool validate_credit_card_number(const char* cc_num)
{
    return strlen(cc_num) == 16 && does_pass_luhn_algorithm(cc_num);
}

int main()
{
    char cc_num[17];
    scanf("%s", cc_num);

    if (validate_credit_card_number(cc_num))
        printf("valid");
    else
        printf("not valid");

    return 0;
}
