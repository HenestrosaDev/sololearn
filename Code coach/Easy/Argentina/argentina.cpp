#include <iostream>
using namespace std;

int main()
{
	// NOTE: Money should be handled with libraries such as boost

	double ars; // Argentine peso
	cin >> ars;

	double usd; // US dollar
	cin >> usd;

	double arsToUsd = 0.02; // exchange rate
	double convertedUsd = ars * arsToUsd;

	if (convertedUsd > usd)
	{
		cout << "Dollars";
	}
	else
	{
		cout << "Pesos";
	}

	return 0;
}
