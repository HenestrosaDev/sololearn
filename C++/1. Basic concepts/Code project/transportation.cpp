#include <iostream>

int main()
{
	int passengers;
	std::cin >> passengers;
	std::cout << 50 - passengers % 50;

	return 0;
}
