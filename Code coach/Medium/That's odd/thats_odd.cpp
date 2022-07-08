#include <iostream>
using namespace std;

int main()
{
	int length;
	cin >> length;

	int numbers[length] = {};
	for (int i = 0; i < length; i++)
	{
		int number;
		cin >> number;

		if (number % 2 == 0)
		{
			numbers[i] = number;
		}
	}

	int sum = 0;
	for (auto &num : numbers)
	{
		sum += num;
	}

	cout << sum;

	return 0;
}
