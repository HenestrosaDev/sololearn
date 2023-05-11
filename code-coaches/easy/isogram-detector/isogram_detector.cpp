#include <iostream>
#include <unordered_set>
#include <string>

bool is_isogram(const std::string& word)
{
    // Use an unordered_set to remove duplicate characters in the word
    // Then check if the length of the original word is equal to the size of the set
    std::unordered_set<char> charSet(word.begin(), word.end());
    return word.length() == charSet.size();
}

int main()
{
    std::string word;
    std::getline(std::cin, word);

    if (isIsogram(word))
        std::cout << "true";
    else
        std::cout << "false";

    return 0;
}
