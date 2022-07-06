#include <iostream>
using namespace std;

int main()
{
	string chars;
	cin >> chars;

	char previousChar = ' ';
	bool isRepeated = false;

	for (auto &ch : chars)
	{
		if (ch == previousChar)
		{
			cout << "Deja Vu";
			isRepeated = true;
			break;
		}
		else
		{
			previousChar = ch;
		}
	}

	if (!isRepeated)
	{
		cout << "Unique";
	}

	return 0;
}