#include <iostream>

int main()
{
	int score;
	std::cin >> score;

	int squirtGunPrice;
	std::cin >> squirtGunPrice;

	int ratio = 12; // 12 points = 1 ticket
	int tickets = score / ratio;

	if (tickets >= squirtGunPrice) 
	{
		std::cout << "Buy it!";
	}
	else 
	{
		std::cout << "Try again";
	}

	return 0;
}