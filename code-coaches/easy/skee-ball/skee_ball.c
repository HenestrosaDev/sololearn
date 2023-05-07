#include <stdio.h>

const char* can_buy_squirt_gun(int score, int squirt_gun_price)
{
    int ratio = 12; // 12 points = 1 ticket
	int tickets = score / ratio;

	if (tickets >= squirt_gun_price)
		return "Buy it!";
	else
		return "Try again";
}


int main()
{
	int score, squirt_gun_price;
	scanf("%d %d", &score, &squirt_gun_price);

    printf("%s", can_buy_squirt_gun(score, squirt_gun_price));

	return 0;
}