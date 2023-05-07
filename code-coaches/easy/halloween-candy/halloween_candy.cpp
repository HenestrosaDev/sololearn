#include <iostream>
#include <cmath>

int main()
{
	int num_houses;

	do
	{
		std::cin >> num_houses;
	}
	while (num_houses < 3);

    int bill_probability = ceil(100.0 / num_houses * 2);

	std::cout << bill_probability;

	return 0;
}