#include <iostream>

int main()
{
	int unitsSold;
	std::cin >> unitsSold;

	int sellPrice = 3000000;
	int costPrice = 2000000;
	int insurancePrice = 1000000;

	int unitsBuilt = 10;
	int expenses = (unitsBuilt * costPrice) + insurancePrice;
	int benefit = unitsSold * sellPrice;

	if (benefit > expenses)
	{
		std::cout << "Profit";
	}
	else if (benefit < expenses)
	{
		std::cout << "Loss";
	}
	else
	{
		std::cout << "Broke Even";
	}

	return 0;
}
