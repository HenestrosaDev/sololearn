#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int get_savings(std::vector<float>& prices)
{
    // We pay full price for the most expensive item, so we remove it from the vector
    prices.erase(std::remove(prices.begin(), prices.end(), *std::max_element(prices.begin(), prices.end())), prices.end());

    float discount = 0.3;
    float savings_pre_tax = 0.0;
    for (float price : prices)
    {
        savings_pre_tax += price * discount;
    }

    float tax = 1.07;
    float savings_post_tax = savings_pre_tax * tax;

    return std::floor(savings_post_tax);
}

int main()
{
    // Get input
    std::string input;
    std::getline(std::cin, input);

    // Split input and store it in a vector of floats
    std::vector<float> prices;
    std::size_t pos = 0;
    while ((pos = input.find(',')) != std::string::npos) {
        prices.push_back(std::stof(input.substr(0, pos)));
        input.erase(0, pos + 1);
    }
    prices.push_back(std::stof(input));

    // Print the result
    std::cout << get_savings(prices);

    return 0;
}
