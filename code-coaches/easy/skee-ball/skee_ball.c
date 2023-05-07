#include <stdio.h>

int main()
{
	int score, squirtGunPrice;
	scanf("%d %d", &score, &squirtGunPrice);

	int ratio = 12; // 12 points = 1 ticket
	int tickets = score / ratio;

	if (tickets >= squirtGunPrice)
	{
		printf("Buy it!");
	}
	else
	{
		printf("Try again");
	}

	return 0;
}