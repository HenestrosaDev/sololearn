#include <iostream>

int main()
{
	int n;
	std::cin >> n;

	while (n > 0)
	{
		std::cout << n;

		if (n - 1 > 0)
		{
			std::cout << std::endl;
		}

		if (n % 5 == 0)
		{
			std::cout << "Beep" << std::endl;
		}

		n--;
	}

	return 0;
}
