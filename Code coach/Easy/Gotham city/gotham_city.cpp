#include <iostream>
using namespace std;

int main()
{
	int criminals;
	cin >> criminals;

	if (criminals < 5)
	{
		cout << "I got this!";
	}
	else if (5 <= criminals && criminals <= 10)
	{
		cout << "Help me Batman";
	}
	else
	{
		cout << "Good Luck out there!";
	}

	return 0;
}