#include <iostream>
#include <regex>

int main()
{
	std::string time;
	getline(std::cin, time);

	std::string dayPeriod = "";

	std::regex exp("\\s[a-zA-Z]{2}");
	std::smatch res;
	std::string matchedDayPeriod = "";

	std::string::const_iterator searchStart(time.cbegin());
	while (regex_search(searchStart, time.cend(), res, exp))
	{
		matchedDayPeriod += (searchStart == time.cbegin() ? "" : " ");
		matchedDayPeriod += res[0];
		// searchStart = res.suffix().first;

		break;
	}

	if (!matchedDayPeriod.empty())
	{
		size_t startPositionToErase = time.find(matchedDayPeriod);
		time.erase(startPositionToErase, matchedDayPeriod.length());
		for (auto &c : matchedDayPeriod) 
		{
			if (isalpha(c)) // avoid whitespaces
			{
				dayPeriod += toupper(c);
			}
		}
	}

	std::regex reg(":");
	std::sregex_token_iterator iter(time.begin(), time.end(), reg, -1);
	std::sregex_token_iterator end;
	std::vector<std::string> timeSplitted(iter, end);

	std::string hours = timeSplitted[0];
	std::string minutes = timeSplitted[1];

	if (hours.length() == 1)
	{
		hours = "0" + hours;
	}
	int hoursInt = stoi(hours);

	if (dayPeriod == "PM")
	{
		hours = std::to_string(hoursInt + 12);
	}
	else if (dayPeriod != "AM")
	{
		if (hoursInt > 12)
		{
			hours = std::to_string(hoursInt - 12);
			minutes += " PM";
		}
		else 
		{
			minutes += " AM";
		}
	}

	std::cout << hours << ":" << minutes;

	return 0;
}
