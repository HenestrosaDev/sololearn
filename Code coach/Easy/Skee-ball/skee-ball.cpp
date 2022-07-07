#include <iostream>
using namespace std;

int main()
{
	int score;
	cin >> score;

	int squirtGunPrice;
	cin >> squirtGunPrice;

	int ratio = 12; // 12 points = 1 ticket
	int tickets = score / ratio;

	if (tickets >= squirtGunPrice) 
	{
		cout << "Buy it!";
	}
	else 
	{
		cout << "Try again";
	}

	return 0;
}