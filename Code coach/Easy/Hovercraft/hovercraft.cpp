#include <iostream>
using namespace std;

int main()
{
	int unitsSold;
	cin >> unitsSold;

	int sellPrice = 3000000;
	int costPrice = 2000000;
	int insurancePrice = 1000000;

	int unitsBuilt = 10;
	int expenses = (unitsBuilt * costPrice) + insurancePrice;
	int benefit = unitsSold * sellPrice;

	if (benefit > expenses)
	{
		cout << "Profit";
	}
	else if (benefit < expenses)
	{
		cout << "Loss";
	}
	else
	{
		cout << "Broke Even";
	}

	return 0;
}
