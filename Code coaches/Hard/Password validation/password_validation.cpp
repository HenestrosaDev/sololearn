#include <iostream>
#include <regex>

int main() 
{
	std::string password;
	std::cin >> password;

	const std::regex exp("(?=.*[A-Za-z])(?=(.*\\d){2,})(?=(.*[@$!%*#?&]){2,})[A-Za-z\\d@$!%*#?&]{8,}");
	std::smatch base_match;

	if (std::regex_match(password, base_match, exp))
	{
		std::cout << "Strong";
	}
	else
	{
		std::cout << "Weak";
	}

	return 0;
}