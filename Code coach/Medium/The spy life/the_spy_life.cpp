#include <iostream>
using namespace std;

void reverseStr(string &str)
{
	int n = str.length();

	// Swap character starting from two corners
	for (int i = 0; i < n / 2; i++)
	{
		swap(str[i], str[n - i - 1]);
	}
}

int main()
{
	string encoded;
	getline(cin, encoded);

	string decoded;
	for (auto &ch : encoded)
	{
		if (isspace(ch) || isalpha(ch))
		{
			decoded += ch;
		}
	}

	reverseStr(decoded);
	cout << decoded;

	return 0;
}