#include <iostream>

std::string can_buy_squirt_gun(int score, int squirt_gun_price)
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
	int score;
	std::cin >> score;

	int squirt_gun_price;
	std::cin >> squirt_gun_price;

	std::cout << can_buy_squirt_gun(score, squirt_gun_price)

	return 0;
}