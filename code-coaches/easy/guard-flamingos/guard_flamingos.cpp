#include <iostream>

int main()
{
	int yard_length, yard_width;
	std::cin >> yard_length >> yard_width;

    int flamingos_to_purchase = yard_length + yard_width;
	std::cout << flamingos_to_purchase;

	return 0;
}