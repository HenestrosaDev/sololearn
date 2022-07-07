#include <iostream>
using namespace std;

int main()
{
	int yards;
	cin >> yards;

	if (yards > 10)
	{
		cout << "High Five";
	}
	else if (yards < 1)
	{
		cout << "shh";
	}
	else
	{
		for(int i = 0; i < yards; i++)
		{
			cout << "Ra!";
		}
	}

	return 0;
}
