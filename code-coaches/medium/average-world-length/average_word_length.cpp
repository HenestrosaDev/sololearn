#include <iostream>
#include <cmath>
#include <regex>

int main()
{
	std::string words;
	getline(std::cin, words);

	int wordsNumber = 0;
	int totalLength = 0;

	std::regex reg("\\s+");
	std::sregex_token_iterator iter(words.begin(), words.end(), reg, -1);
	std::sregex_token_iterator end;

	std::vector<std::string> vec(iter, end);
	for (auto word : vec)
	{
		wordsNumber++;
		for (auto c : word)
		{
			if (isalpha(c))
			{
				totalLength++;
			}
		}
	}

	// Implicit casting to ceil the average
	int averageLength = (int) ceil((1.0 * totalLength) / (1.0 * wordsNumber));
	std::cout << averageLength;

	return 0;
}