#include <iostream>
#include <string>
#include <algorithm>

int getVowelsCount(const std::string& sentence)
{
    std::string vowels = "aeiou";
    int count = 0;
    for (char c : sentence)
    {
        if (vowels.find(std::tolower(c)) != std::string::npos)
            count++;
    }
    return count;
}

int main()
{
    std::string sentence;
    std::getline(std::cin, sentence);

    std::cout << getVowelsCount(sentence) << std::endl;

    return 0;
}
