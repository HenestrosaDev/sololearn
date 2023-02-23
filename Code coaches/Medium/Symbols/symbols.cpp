#include <iostream>

int main()
{
	std::string encoded;
	getline(std::cin, encoded);

	std::string decoded;
	for (auto &ch : encoded)
	{
		if (isspace(ch) || isalnum(ch))
		{
			decoded += ch;
		}
	}

	std::cout << decoded;

	return 0;
}
