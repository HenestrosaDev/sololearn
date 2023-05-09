#include <iostream>
#include <string>
#include <map>

std::string replace_numbers_with_words(std::string sentence)
{
    std::map<int, std::string> num_to_word = {
        {0, "zero"}, {1, "one"}, {2, "two"}, {3, "three"}, {4, "four"},
        {5, "five"}, {6, "six"}, {7, "seven"}, {8, "eight"}, {9, "nine"},
        {10, "ten"}
    };

    for (int i = 0; i < sentence.length(); i++)
    {
        if (std::isdigit(sentence[i]))
        {
            int num = sentence[i] - '0';
            i++;

            // Check if there are additional digits that form a multi-digit number
            while (i < sentence.length() && std::isdigit(sentence[i])) {
                num = num * 10 + (sentence[i] - '0');
                i++;
            }

            // Replace the number with its English word form if it's between 0 and 10
            if (num >= 0 && num <= 10)
            {
                sentence.replace(i - std::to_string(num).length(), std::to_string(num).length(), num_to_word[num]);
                i += num_to_word[num].length() - std::to_string(num).length();
            }
        }
    }

    return sentence;
}

int main()
{
    std::string sentence;
    std::getline(std::cin, sentence);

    std::cout << replace_numbers_with_words(sentence);

    return 0;
}
