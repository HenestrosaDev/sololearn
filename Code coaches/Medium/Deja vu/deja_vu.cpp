#include <iostream>

int main()
{
	std::string chars;
	std::cin >> chars;

	char previousChar = ' ';
	bool isRepeated = false;

	for (auto &ch : chars)
	{
		if (ch == previousChar)
		{
			std::cout << "Deja Vu";
			isRepeated = true;
			break;
		}
		else
		{
			previousChar = ch;
		}
	}

	if (!isRepeated)
	{
		std::cout << "Unique";
	}

	return 0;
}
