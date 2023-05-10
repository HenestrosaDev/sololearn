#include <iostream>

bool can_buy_squirt_gun(int score, int squirt_gun_price)
{
    int ratio = 12; // 12 points = 1 ticket
	int tickets = score / ratio;
	return tickets >= squirt_gun_price;
}

int main()
{
	int score;
	std::cin >> score;

	int squirt_gun_price;
	std::cin >> squirt_gun_price;

    if (can_buy_squirt_gun(score, squirt_gun_price))
        std::cout << "Buy it!";
	else
		std::cout << "Try again";

	return 0;
}