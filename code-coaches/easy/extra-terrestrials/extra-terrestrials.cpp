#include <iostream>

std::string reverse(std::string str)
{
	std::string reversedString = "";

	for (int i = str.length() - 1; i >= 0; i--)
	{
		reversedString += str[i];
	}

	return reversedString;
}

int main()
{
	std::string text;
	getline(std::cin, text);

	std::cout << reverse(text);

	return 0;
}