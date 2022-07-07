#include <iostream>
using namespace std;

int main()
{
	string encoded;
	getline(cin, encoded);

	string decoded;
	for (auto &ch : encoded)
	{
		if (isspace(ch) || isalnum(ch))
		{
			decoded += ch;
		}
	}

	cout << decoded;

	return 0;
}