#include <iostream>
using namespace std;

int main()
{
	int siblings, popsicles;

	do
	{
		cin >> siblings >> popsicles;
	} while (siblings == 0);

	if (popsicles % siblings == 0)
	{
		cout << "give away";
	}
	else
	{
		cout << "eat them yourself";
	}

	return 0;
}