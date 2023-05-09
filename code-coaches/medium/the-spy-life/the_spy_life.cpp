#include <iostream>

void reverse_string(std::string &str)
{
	int n = str.length();

	// Swap character starting from two corners
	for (int i = 0; i < n / 2; i++)
	{
		std::swap(str[i], str[n - i - 1]);
	}
}

std::string decode_message(std::string message)
{
    std::string decoded_message;
	for (auto &ch : message)
	{
		if (isspace(ch) || isalpha(ch))
		{
			decoded_message += ch;
		}
	}

	reverse_string(decoded_message);
	return decoded_message;
}

int main()
{
	std::string message;
	getline(std::cin, message);

	std::cout << decode_message(message);

	return 0;
}
