#include <iostream>
#include <unordered_map>
#include <vector>

int get_snack_points(const std::vector<std::string>& snacks)
{
    std::unordered_map<std::string, int> snacks_dict
    {
        {"Mango", 9},
        {"Lettuce", 5},
        {"Carrot", 4},
        {"Cheeseburger", 0},
    };

    int points = 0;
    for (const auto& snack : snacks)
    {
        points += snacks_dict[snack];
    }

    return points;
}

int main()
{
    std::vector<std::string> snacks;
    std::string snack;
    while (std::cin >> snack)
    {
        snacks.push_back(snack);
    }

    if (get_snack_points(snacks) >= 10)
        std::cout << "Come on Down!\n";
    else
        std::cout << "Time to wait\n";

    return 0;
}
