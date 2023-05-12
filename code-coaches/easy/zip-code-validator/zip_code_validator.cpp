#include <iostream>
#include <string>
#include <sstream>

bool is_zip_code_valid(const std::string& zip_code)
{
    try
    {
        int zip_code_int = std::stoi(zip_code);
        return zip_code.length() == 5;
    }
    catch (std::invalid_argument)
    {
        return false;
    }
}

int main()
{
    std::string zip_code;
    std::getline(std::cin, zip_code);

    if (is_zip_code_valid(zip_code))
        std::cout << "true";
    else
        std::cout << "false";

    return 0;
}
