#include <iostream>

std::string hovercraft_profit_status(int units_sold)
{
	int sell_price = 3000000;
	int cost_price = 2000000;
	int insurance_price = 1000000;

	int units_built = 10;
	int expenses = (units_built * cost_price) + insurance_price;
	int revenue = units_sold * sell_price;

	if (revenue > expenses)
        return "Profit";
    else if (revenue < expenses)
        return "Loss";
    else
        return "Broke Even";
}

int main()
{
	int units_sold;
    std::cin >> units_sold;

	std::cout << hovercraft_profit_status(units_sold);

	return 0;
}
