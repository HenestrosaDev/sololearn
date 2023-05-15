#include <iostream>
#include <vector>
#include <sstream>
#include <iomanip>
#include <cmath>

float get_total(const std::vector<int>& prices)
{
    float tax = 1.07;
    float total = 0.0;
    for (int price : prices) {
        total += (price < 20) ? price * tax : price;
    }
    float total_rounded = std::round(total * 100.0) / 100.0;

    return total_rounded;
}

int main()
{
    std::string input;
    std::getline(std::cin, input);

    std::vector<int> prices;
    std::istringstream iss(input);
    std::string token;
    while (std::getline(iss, token, ',')) {
        prices.push_back(std::stoi(token));
    }

    std::cout << std::fixed << std::setprecision(2) << get_total(prices);

    return 0;
}
