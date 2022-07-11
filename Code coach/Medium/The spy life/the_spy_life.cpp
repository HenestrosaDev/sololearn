#include <iostream>

void reverseStr(std::string &str)
{
	int n = str.length();

	// Swap character starting from two corners
	for (int i = 0; i < n / 2; i++)
	{
		std::swap(str[i], str[n - i - 1]);
	}
}

int main()
{
	std::string encoded;
	getline(std::cin, encoded);

	std::string decoded;
	for (auto &ch : encoded)
	{
		if (isspace(ch) || isalpha(ch))
		{
			decoded += ch;
		}
	}

	reverseStr(decoded);
	std::cout << decoded;

	return 0;
}
