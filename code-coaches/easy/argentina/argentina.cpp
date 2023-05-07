#include <iostream>

std::string lower_currency_after_conversion(double ars, double usd)
{
    double arsToUsd = 0.02; // exchange rate
	double convertedUsd = ars * arsToUsd;

	if (convertedUsd > usd)
		return "Dollars";
	else
		return "Pesos";
}

int main()
{
	// NOTE: Money should be handled with libraries such as boost

	double ars; // Argentine peso
	std::cin >> ars;

	double usd; // US dollar
	std::cin >> usd;

    std::cout << lower_currency_after_conversion(ars, usd);

	return 0;
}
