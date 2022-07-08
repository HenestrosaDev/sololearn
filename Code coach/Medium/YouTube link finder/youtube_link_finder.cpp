#include <iostream>
#include <regex>
using namespace std;

int main()
{
	string link;
	cin >> link;

	regex exp("[\\/=][\\w-]{11}");
	smatch res;
	string id = "";

	string::const_iterator searchStart(link.cbegin());
	while (regex_search(searchStart, link.cend(), res, exp))
	{
		id += (searchStart == link.cbegin() ? "" : " ");
		id += res[0];
		//searchStart = res.suffix().first;

		// we break out in the first iteration because the id goes before any parameter
		break;
	}

	// erase(0, 1) removes the first character of the string, which is / or =
	id = id.erase(0, 1);
	cout << id;

	return 0;
}