#include <iostream>
#include <cmath>
#include <regex>

int get_average_word_length(std::string words)
{
	std::regex reg("\\s+");
	std::sregex_token_iterator iter(words.begin(), words.end(), reg, -1);
	std::sregex_token_iterator end;

	std::vector<std::string> vec(iter, end);
    int words_number = vec.size();
	int total_length = 0;

	for (auto word : vec)
	{
		for (auto c : word)
		{
			if (isalpha(c))
			{
				total_length++;
			}
		}
	}

	// Implicit casting to ceil the average
	int average_length = (int) ceil((1.0 * total_length) / (1.0 * words_number));
	return average_length;
}

int main()
{
	std::string words;
	getline(std::cin, words);

	std::cout << get_average_word_length(words);

	return 0;
}