#include <iostream>
#include <regex>

int main()
{
	std::string str;
	getline(std::cin, str);

	std::regex reg("\\s+");
	std::sregex_token_iterator iter(str.begin(), str.end(), reg, -1);
	std::sregex_token_iterator end;

	std::vector<std::string> vec(iter, end);
	for (auto a : vec)
	{
		std::string word = a.substr(1) + a[0] + "ay";
		std::cout << word << " ";
	}

	return 0;
}
