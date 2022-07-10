#include <iostream>
using namespace std;

int main()
{
	string text;
	getline(cin, text);

	string textInvertedAscii = "";
	for (auto c : text) 
	{
		if (isalpha(c))
		{
			int asciiLowA = 97;
			int asciiLowZ = 122;
			textInvertedAscii += char(asciiLowZ - (int) tolower(c) + asciiLowA);
		} 
		else 
		{
			textInvertedAscii += c;
		}
	}
 
	cout << textInvertedAscii;

	return 0;
}