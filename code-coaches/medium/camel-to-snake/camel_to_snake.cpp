#include <iostream>
#include <string>

std::string to_snake_case(std::string camel_case_string)
{
    std::string snake_case_string = "";

    for (int i = 0; i < camel_case_string.length(); i++)
    {
        char current_char = camel_case_string[i];

        if (i != 0)
        {
            char previous_char = camel_case_string[i - 1];

            if ((isupper(current_char) && isalpha(previous_char))
                || (isalpha(current_char) && isdigit(previous_char)))
            {
                snake_case_string += "_";
            }
        }

        snake_case_string += tolower(current_char);
    }

    return snake_case_string;
}

int main()
{
    std::string camel_case_string;
    getline(std::cin, camel_case_string);

    std::cout << to_snake_case(camel_case_string);

    return 0;
}
