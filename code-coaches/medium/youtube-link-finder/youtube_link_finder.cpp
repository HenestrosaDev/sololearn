#include <iostream>
#include <regex>

std::string extract_video_id(std::string url)
{
    std::regex exp("[\\/=][\\w-]{11}");
	std::smatch res;
	std::string id = "";

	std::string::const_iterator search_start(url.cbegin());
	while (regex_search(search_start, url.cend(), res, exp))
	{
		id += (search_start == url.cbegin() ? "" : " ");
		id += res[0];

		// we break out in the first iteration because the id goes before any parameter
		break;
	}

	id = id.erase(0, 1); // erase(0, 1) removes the first character of the string, which is / or =
	return id;
}

int main()
{
	std::string url;
	std::cin >> url;

	std::cout << extract_video_id(url);

	return 0;
}
