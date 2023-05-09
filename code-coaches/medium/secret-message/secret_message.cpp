#include <iostream>

std::string encode_message(std::string message)
{
    std::string text_inverted_ascii = "";
    int ascii_lowercase_a = 97;
    int ascii_lowercase_z = 122;

	for (auto character : message)
	{
		if (isalpha(character))
			text_inverted_ascii += char(ascii_lowercase_z - (int) tolower(character) + ascii_lowercase_a);
		else
			text_inverted_ascii += character;
	}

	return text_inverted_ascii;
}

int main()
{
	std::string message;
	getline(std::cin, message);

	std::cout << encode_message(message);

	return 0;
}
