#include <stdio.h>
#include <stdbool.h>

bool can_buy_squirt_gun(int score, int squirt_gun_price)
{
    int ratio = 12; // 12 points = 1 ticket
	int tickets = score / ratio;
	return tickets >= squirt_gun_price;
}

int main()
{
	int score, squirt_gun_price;
	scanf("%d %d", &score, &squirt_gun_price);

    if (can_buy_squirt_gun(score, squirt_gun_price))
        printf("%s", "Buy it!");
	else
	    printf("%s", "Try again");

	return 0;
}