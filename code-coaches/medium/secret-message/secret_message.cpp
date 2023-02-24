#include <iostream>

int main()
{
	std::string text;
	getline(std::cin, text);

	std::string textInvertedAscii = "";
	for (auto c : text) 
	{
		if (isalpha(c))
		{
			int asciiLowA = 97;
			int asciiLowZ = 122;
			textInvertedAscii += char(asciiLowZ - (int) tolower(c) + asciiLowA);
		} 
		else 
		{
			textInvertedAscii += c;
		}
	}

	std::cout << textInvertedAscii;

	return 0;
}
