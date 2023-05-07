#include <iostream>
#include <cmath>

int main()
{
	int houses;

	do
	{
		std::cin >> houses;
	}
	while (houses < 3);

	int billProbability = ceil(100.0 / houses * 2);
	std::cout << billProbability;

	return 0;
}