#include <iostream>
#include <vector>
#include <unordered_map>
#include <numeric>
#include <iomanip>
#include <cmath>

double get_total_cost(std::vector<std::string> order)
{
    std::unordered_map<std::string, double> menu = {
        {"Pizza", 6.0},
        {"Nachos", 6.0},
        {"Cheeseburger", 10.0},
        {"Water", 4.0},
        {"Coke", 5.0},
    };
    double subtotal = std::accumulate(order.begin(), order.end(), 0.0, [&](double sum, const std::string& item) {
        return sum + menu[item] ? menu[item] : 5.0;
    });
    double tax = 1.07;
    double total = subtotal * tax;

    return round(total * 100) / 100;
}

int main()
{
    std::string order_input;
    std::getline(std::cin, order_input);

    std::vector<std::string> order;
    std::istringstream iss(order_input);
    for (std::string item; iss >> item; )
    {
        order.push_back(item);
    }

    std::cout << get_total_cost(order);

    return 0;
}
