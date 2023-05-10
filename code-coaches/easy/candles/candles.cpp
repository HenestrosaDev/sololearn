#include <iostream>

int main()
{
    int friends;
    std::cin >> friends;

    int candles_per_person = 9;
    // + candlesPerPerson because we order 9 candles, independently of the number of friends
    int candles = friends * candles_per_person + candles_per_person;

	std::cout << candles;

	return 0;
}