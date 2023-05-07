#include <stdio.h>

int main()
{
	double ars; // Argentine peso
	scanf("%lf", &ars);

	double usd; // US dollar
	scanf("%lf", &usd);

	double arsToUsd = 0.02; // exchange rate
	double convertedUsd = ars * arsToUsd;

	if (convertedUsd > usd)
	{
		printf("Dollars");
	}
	else
	{
		printf("Pesos");
	}

	return 0;
}