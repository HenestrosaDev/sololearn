#include <iostream>

int main()
{
	// NOTE: Money should be handled with libraries such as boost

	double ars; // Argentine peso
	std::cin >> ars;

	double usd; // US dollar
	std::cin >> usd;

	double arsToUsd = 0.02; // exchange rate
	double convertedUsd = ars * arsToUsd;

	if (convertedUsd > usd)
	{
		std::cout << "Dollars";
	}
	else
	{
		std::cout << "Pesos";
	}

	return 0;
}
