#include <iostream>
#include <regex>
using namespace std;

int main()
{
	string str;
	getline(cin, str);

	regex reg("\\s+");
	sregex_token_iterator iter(str.begin(), str.end(), reg, -1);
	sregex_token_iterator end;

	vector<string> vec(iter, end);
	for (auto a : vec)
	{
		string word = a.substr(1) + a[0] + "ay";
		cout << word << " ";
	}

	return 0;
}