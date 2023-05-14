#include <iostream>
#include <string>
#include <vector>

bool does_sentence_flow(std::string sentence)
{
    std::vector<std::string> words;
    std::string word;
    for (char c : sentence)
    {
        if (c == ' ')
        {
            words.push_back(word);
            word.clear();
        }
        else
        {
          word.push_back(c);
        }
    }
    words.push_back(word);

    for (int i = 1; i < words.size(); ++i)
    {
        if (words[i][0] != words[i - 1][words[i - 1].size() - 1])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    std::string sentence;
    getline(std::cin, sentence);

    if (does_sentence_flow(sentence))
        std::cout << "true";
    else
        std::cout << "false";

    return 0;
}
