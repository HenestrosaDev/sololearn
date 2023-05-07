#include <stdio.h>

const char* distribute_popsicles(int popsicles, int siblings)
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
        scanf("%d %d", &siblings, &popsicles);
	}
	while (siblings == 0);

	printf("%s", distribute_popsicles(popsicles, siblings))

	return 0;
}
