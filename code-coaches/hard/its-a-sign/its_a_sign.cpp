#include <iostream>
#include <vector>
#include <string>

bool is_palindrome(const std::string& word)
{
    int length = word.length();
    for (int i = 0; i < length / 2; i++)
    {
        if (word[i] != word[length - i - 1])
        {
            return false;
        }
    }
    return true;
}

bool contains_palindrome(const std::vector<std::string>& words)
{
    for (const auto& word : words)
    {
        if (is_palindrome(word))
        {
            return true;
        }
    }

    return false;
}

int main()
{
    const int size = 4;
    std::vector<std::string> words(size);

    for (int i = 0; i < size; i++)
    {
        std::cin >> words[i];
    }

    if (contains_palindrome(words)
        std::cout << "Open" << std::endl;
    else
        std::cout << "Trash" << std::endl;

    return 0;
}
