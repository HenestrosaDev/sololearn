#include <iostream>
using namespace std;

int main()
{
	int ages[5];
	int minAge;
	int ticketPrice = 10;
	float sum;

	for (int i = 0; i < 5; ++i)
	{
		cin >> ages[i];
		sum += ticketPrice;
		if (ages[i] < minAge || minAge == 0)
		{
			minAge = ages[i];
		}
	}

	// 100.0 is important to get a float instead an int
	sum -= (minAge / 100.0 * sum);
	cout << sum;

	return 0;
}