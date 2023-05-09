#include <iostream>

std::string remove_symbols(std::string encoded)
{
    // symbols: a char that is not alphanumeric or a space
    std::string decoded;
	for (auto &ch : encoded)
	{
		if (isspace(ch) || isalnum(ch))
			decoded += ch;
	}

	return decoded;
}

int main()
{
	std::string encoded;
	getline(std::cin, encoded);

	std::cout << remove_symbols(encoded);

	return 0;
}
