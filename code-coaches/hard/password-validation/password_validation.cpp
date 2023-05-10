#include <iostream>
#include <string>
#include <algorithm>

bool is_password_strong(std::string password)
{
    // Check if the password has at least 2 numbers, 2 special characters,
    // and a length of at least 7 characters
    int num_digits = std::count_if(password.begin(), password.end(), [](char c) {
        return std::isdigit(c);
    });
    int num_special_chars = std::count_if(password.begin(), password.end(), [](char c) {
        return c == '!' || c == '@' || c == '#' || c == '$' || c == '%' || c == '&' || c == '*';
    });

    bool is_strong = num_digits >= 2 && num_special_chars >= 2 && password.length() >= 7;
    return is_strong;
}

int main() {
    std::string password;
    std::getline(std::cin, password);

    if (is_password_strong(password))
        std::cout << "Strong";
    else
        std::cout << "Weak";

    return 0;
}
