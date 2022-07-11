#include <iostream>
#include <regex>

int main()
{
	std::string link;
	std::cin >> link;

	std::regex exp("[\\/=][\\w-]{11}");
	std::smatch res;
	std::string id = "";

	std::string::const_iterator searchStart(link.cbegin());
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
	std::cout << id;

	return 0;
}
