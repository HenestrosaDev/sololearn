#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int houses;

	do
	{
		cin >> houses;
	} while (houses < 3);

	int billProbability = ceil(100.0 / houses * 2);
	cout << billProbability;

	return 0;
}