// NOT OPERATIVE YET

/*
	To check:
	- https://www.delftstack.com/howto/cpp/cpp-map-check-if-key-exists/#:~:text=l%20Key%20Exists!-,Use%20the%20std%3A%3Amap%3A%3Acontains%20Function%20to%20Check,key%20exists%20in%20the%20object.
	- https://stackoverflow.com/questions/42172674/performing-a-regex-search-and-replace-on-a-stdstring
	- https://stackoverflow.com/questions/3418231/replace-part-of-a-string-with-another-string
	- https://stackoverflow.com/questions/23620861/how-to-iterate-all-regex-matches-in-a-stdstring-with-their-starting-positions
*/
/*
#include <iostream>
#include <regex>
#include <map>
using namespace std;

int main()
{
	// non-const iterator (all the stdlib default instantiations use const)
	using strmatch = std::match_results<std::string::iterator>;

	map<string, string> numsToWord = {
		{"0", "zero"},
		{"1", "one"},
		{"2", "two"},
		{"3", "three"},
		{"4", "four"},
		{"5", "five"},
		{"6", "six"},
		{"7", "seven"},
		{"8", "eight"},
		{"9", "nine"},
		{"10", "ten"},
	};

	string text;
	getline(cin, text);

	regex exp(R"(\b\d+\b)");
	strmatch res;

	auto begin = text.begin();
	auto end = text.end();

	while (regex_search(begin, end, res, exp))
	{
		//cout << "Number: " << res.str() << " | Position: " << res.position() << " | Length: " << res[0].length() << endl;
		//cout << "numsToWord: " << numsToWord.at(res[0]) << endl;
		//if (numsToWord.find(res[0]) != numsToWord.end())
		//{
			text.replace(res.position(), res[0].length(), numsToWord.at(res[0]));
		//}
		//cout << text << endl;
		//cout << "--------------------" << endl;

		begin += res.position() + res.length();
		end += res.length();
	}

	cout << text;

	return 0;
}
*/

/* //SECOND APPROACH
#include <iostream>
#include <regex>
#include <map>
using namespace std;

int main()
{
  map<string, string> numsToWord = {
    {"0", "zero"},
    {"1", "one"},
    {"2", "two"},
    {"3", "three"},
    {"4", "four"},
    {"5", "five"},
    {"6", "six"},
    {"7", "seven"},
    {"8", "eight"},
    {"9", "nine"},
    {"10", "ten"},
  };

  string text;
  getline(cin, text);

  std::regex exp(R"(\b\d+\b)");

  for (
    std::sregex_iterator i = std::sregex_iterator(text.begin(), text.end(), exp);
    i != std::sregex_iterator();
    ++i
  ) {
    std::smatch m = *i;
    text.replace(m.position(), m.str().length(), numsToWord.at(m.str()));
    //std::cout << m.str().length() << " at position " << ;
  }

  cout << text;

  return 0;
}
*/