#include <iostream>

int main()
{
	int criminals;
	std::cin >> criminals;

	if (criminals < 5)
	{
		std::cout << "I got this!";
	}
	else if (5 <= criminals && criminals <= 10)
	{
		std::cout << "Help me Batman";
	}
	else
	{
		std::cout << "Good Luck out there!";
	}

	return 0;
}