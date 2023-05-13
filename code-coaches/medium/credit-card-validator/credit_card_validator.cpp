#include <iostream>
#include <string>

bool does_pass_luhn_algorithm(const std::string &cc_num)
{
    // Step 1: Reverse the credit card number
    std::string reversed_cc_num(cc_num.rbegin(), cc_num.rend());

    int total_sum = 0;
    for (int i = 0; i < reversed_cc_num.length(); i++)
    {
        int digit = reversed_cc_num[i] - '0';
        // Step 2: Multiply every second digit by 2
        if (i % 2 == 1)
        {
            digit *= 2;
            // Step 3: Subtract 9 from all numbers higher than 9
            if (digit > 9)
            {
                digit -= 9;
            }
        }
        // Step 4: Add all the digits together
        total_sum += digit;
    }

    // Step 5: Modulo 10 of that sum should be equal to 0
    return total_sum % 10 == 0;
}

bool validate_credit_card_number(const string& cc_num)
{
    return cc_num.length() == 16 && does_pass_luhn_algorithm(cc_num);
}

int main()
{
    std::string cc_num;
    std::cin >> cc_num;

    if (validate_credit_card_number(cc_num))
        std::cout << "valid";
    else
        std::cout << "not valid";

    return 0;
}