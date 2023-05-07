#include <iostream>
#include <sstream>

std::string get_cheer(int yards)
{
    if (yards > 10)
	{
		return "High Five";
	}
	else if (yards < 1)
	{
		return "shh";
	}
	else
	{
	    std::stringstream output;
		for (int i = 0; i < yards; i++)
		{
			output << "Ra!";
		}
		return output.str();
	}
}

int main()
{
	int yards;
	std::cin >> yards;

	std::cout << get_cheer(yards);

	return 0;
}
