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

	cout << ceil(100.0 / houses * 2);

	return 0;
}