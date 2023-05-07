#include <iostream>

std::string distribute_popsicles(int popsicles, int siblings)
{
    if (popsicles % siblings == 0)
		return "give away";
	else
		return "eat them yourself";
}

int main()
{
	int siblings, popsicles;

	do
	{
		std::cin >> siblings >> popsicles;
	}
	while (siblings == 0);

	std::cout << distribute_popsicles(popsicles, siblings);

	return 0;
}