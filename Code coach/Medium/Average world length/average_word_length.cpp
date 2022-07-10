#include <iostream>
#include <cmath>
#include <regex>
using namespace std;

int main()
{
	string words;
	getline(cin, words);

	int wordsNumber = 0;
	int totalLength = 0;

	regex reg("\\s+");
	sregex_token_iterator iter(words.begin(), words.end(), reg, -1);
	sregex_token_iterator end;

	vector<string> vec(iter, end);
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
	cout << averageLength;

	return 0;
}