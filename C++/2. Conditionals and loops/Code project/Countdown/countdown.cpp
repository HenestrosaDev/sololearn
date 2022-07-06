#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	while (n > 0)
	{
		cout << n;

		if (n - 1 > 0)
		{
			cout << endl;
		}

		if (n % 5 == 0)
		{
			cout << "Beep" << endl;
		}

		n--;
	}

	return 0;
}
