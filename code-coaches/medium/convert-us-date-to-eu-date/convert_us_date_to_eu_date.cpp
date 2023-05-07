#include <iostream>
#include <map>
#include <vector>
#include <sstream>

void split(std::string const &str, const char delim, std::vector<std::string> &out)
{
	std::stringstream ss(str);
	std::string segment;

	while (getline(ss, segment, delim))
	{
		out.push_back(segment);
	}
}

std::map<std::string, std::string> monthToNum = {
	{"January", "1"},
	{"February", "2"},
	{"March", "3"},
	{"April", "4"},
	{"May", "5"},
	{"June", "6"},
	{"July", "7"},
	{"August", "8"},
	{"September", "9"},
	{"October", "10"},
	{"November", "11"},
	{"December", "12"},
};

int main()
{
	std::string usDate;
	getline(std::cin, usDate);

	std::string euDate;

	if (usDate.find("/") != std::string::npos)
	{
		std::vector<std::string> usDateSplit;
		split(usDate, '/', usDateSplit);
		euDate = usDateSplit[1] + "/" + usDateSplit[0] + "/" + usDateSplit[2];
	}
	else
	{
		std::vector<std::string> usDateSplit;
		split(usDate, ' ', usDateSplit);

		std::string month = monthToNum.at(usDateSplit[0]);

		usDateSplit[1].pop_back();
		std::string day = usDateSplit[1]; 
		
		euDate = day + "/" + month + "/" + usDateSplit[2];
	}

	std::cout << euDate;

	return 0;
}
