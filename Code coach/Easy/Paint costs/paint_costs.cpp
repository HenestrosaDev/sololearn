#include <iostream>
#include <cmath>

int main()
{
	int colorsNumber;
	std::cin >> colorsNumber;

	double basePrice = 40.0;
	double paintPrice = 5.0;
	double taxPercent = 10.0;

	double subtotal = basePrice + (paintPrice * colorsNumber);
	int total = ceil((subtotal / taxPercent) + subtotal);

	std::cout << total;

	return 0;
}