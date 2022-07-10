#include <iostream>
using namespace std;

string reverse(string str)
{
	string reversedString = "";

	for (int i = str.length() - 1; i >= 0; i--)
	{
		reversedString += str[i];
	}

	return reversedString;
}

int main()
{
	string sentence;
	getline(cin, sentence);

	string reversed = reverse(sentence);
	cout << reversed;

	return 0;
}