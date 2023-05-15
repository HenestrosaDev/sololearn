#include <iostream>
#include <string>

std::string split_string(const std::string& word, int num_parts, char separator = '-')
{
    std::string result;
    int length = word.length();
    for (int i = 0; i < length; i += num_parts)
    {
        result += word.substr(i, num_parts);
        if (i + num_parts < length)
        {
            result += separator;
        }
    }
    return result;
}

int main()
{
    std::string word;
    std::cin >> word;

    int num_parts;
    std::cin >> num_parts;

    std::cout << split_string(word, num_parts);

    return 0;
}
