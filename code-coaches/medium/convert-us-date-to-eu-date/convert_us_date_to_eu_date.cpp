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

std::map<std::string, std::string> month_to_num = {
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

std::string get_eu_date(std::string us_date)
{
    std::string eu_date;
    std::vector<std::string> us_date_split;

	if (us_date.find("/") != std::string::npos)
	{
		split(us_date, '/', us_date_split);
		eu_date = us_date_split[1] + "/" + us_date_split[0] + "/" + us_date_split[2];
	}
	else
	{
		split(us_date, ' ', us_date_split);

		std::string month = month_to_num.at(us_date_split[0]);

		us_date_split[1].pop_back();
		std::string day = us_date_split[1];

		eu_date = day + "/" + month + "/" + us_date_split[2];
	}

	return eu_date;
}

int main()
{
	std::string us_date;
	getline(std::cin, us_date);

	std::cout << get_eu_date(us_date);

	return 0;
}
