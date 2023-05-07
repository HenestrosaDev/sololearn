#include <stdio.h>
#include <string.h>

char* lower_currency_after_conversion(double ars, double usd)
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
	double ars; // Argentine peso
	scanf("%lf", &ars);

	double usd; // US dollar
	scanf("%lf", &usd);

    printf("%s", lower_currency_after_conversion(ars, usd));

	return 0;
}