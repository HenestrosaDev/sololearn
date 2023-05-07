#include <stdio.h>

int main()
{
    int siblings, popsicles;

	do
	{
        scanf("%d %d", &siblings, &popsicles);
	}
	while (siblings == 0);

	if (popsicles % siblings == 0)
	{
		printf("give away");
	}
	else
	{
		printf("eat them yourself");
	}

	return 0;
}
