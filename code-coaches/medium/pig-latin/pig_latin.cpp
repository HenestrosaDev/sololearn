#include <iostream>
#include <regex>

std::string to_pig_latin(std::string sentence)
{
    std::regex reg("\\s+");
	std::sregex_token_iterator iter(sentence.begin(), sentence.end(), reg, -1);
	std::sregex_token_iterator end;

	std::vector<std::string> words(iter, end);
	std::string pig_latin_words = "";
	for (auto word : words)
	{
		pig_latin_words += word.substr(1) + word[0] + "ay" + " ";
	}

	return pig_latin_words;
}

int main()
{
	std::string sentence;
	getline(std::cin, sentence);

	std::cout << to_pig_latin(sentence);

	return 0;
}
