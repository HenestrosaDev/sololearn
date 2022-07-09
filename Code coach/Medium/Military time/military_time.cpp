#include <iostream>
#include <regex>
using namespace std;

int main()
{
	string time;
	getline(cin, time);

	string dayPeriod = "";

	regex exp("\\s[a-zA-Z]{2}");
	smatch res;
	string matchedDayPeriod = "";

// esto no vca
	string::const_iterator searchStart(time.cbegin());
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

	regex reg(":");
	sregex_token_iterator iter(time.begin(), time.end(), reg, -1);
	sregex_token_iterator end;
	vector<string> timeSplitted(iter, end);

	string hours = timeSplitted[0];
	string minutes = timeSplitted[1];

	if (hours.length() == 1)
	{
		hours = "0" + hours;
	}
	int hoursInt = stoi(hours);

	if (dayPeriod == "PM")
	{
		hours = to_string(hoursInt + 12);
	}
	else if (dayPeriod != "AM")
	{
		if (hoursInt > 12)
		{
			hours = to_string(hoursInt - 12);
			minutes += " PM";
		}
		else 
		{
			minutes += " AM";
		}
	}
	
	cout << hours << ":" << minutes;

	return 0;
}
