#include <iostream>

int main()
{
	int yards;
	std::cin >> yards;

	if (yards > 10)
	{
		std::cout << "High Five";
	}
	else if (yards < 1)
	{
		std::cout << "shh";
	}
	else
	{
		for(int i = 0; i < yards; i++)
		{
			std::cout << "Ra!";
		}
	}

	return 0;
}
