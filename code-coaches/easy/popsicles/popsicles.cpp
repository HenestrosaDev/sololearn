#include <iostream>

int main()
{
	int siblings, popsicles;

	do
	{
		std::cin >> siblings >> popsicles;
	}
	while (siblings == 0);

	if (popsicles % siblings == 0)
	{
		std::cout << "give away";
	}
	else
	{
		std::cout << "eat them yourself";
	}

	return 0;
}