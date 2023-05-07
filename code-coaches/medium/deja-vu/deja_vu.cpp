#include <iostream>

void check_deja_vu(std::string chars)
{
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
}

int main()
{
	std::string chars;
	std::cin >> chars;

    check_deja_vu(chars);

	return 0;
}
