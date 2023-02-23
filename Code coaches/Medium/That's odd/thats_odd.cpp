#include <iostream>

int main()
{
	int length;
	std::cin >> length;

	int numbers[length] = {};
	for (int i = 0; i < length; i++)
	{
		int number;
		std::cin >> number;

		if (number % 2 == 0)
		{
			numbers[i] = number;
		}
	}

	int sum = 0;
	for (auto &num : numbers)
	{
		sum += num;
	}

	std::cout << sum;

	return 0;
}
