#include <iostream>
#include <vector>
#include <algorithm>

std::string get_longest_common_substring(const std::vector<std::string>& words)
{
    std::string shortest_word = *std::min_element(
        words.begin(),
        words.end(),
        [](const std::string& a, const std::string& b) {
            return a.length() < b.length();
        }
    );

    size_t max_length = shortest_word.length();
    std::string longest_substring;

    for (size_t start = 0; start < max_length; ++start)
    {
        for (size_t end = start + 1; end <= max_length; ++end)
        {
            std::string substring = shortest_word.substr(start, end - start);
            bool found_in_all_words = std::all_of(
                words.begin(),
                words.end(),
                [&substring](const std::string& word) {
                    return word.find(substring) != std::string::npos;
                }
            );

            if (found_in_all_words)
            {
                if (substring.length() > longest_substring.length()
                    || (substring.length() == longest_substring.length() && substring < longest_substring))
                {
                    longest_substring = substring;
                }
            }
        }
    }

    return longest_substring;
}

int main()
{
    std::vector<std::string> words;
    std::string word;

    // Read words from input
    while (std::cin >> word)
    {
        words.push_back(word);
    }

    std::cout << get_longest_common_substring(words) << std::endl;

    return 0;
}
