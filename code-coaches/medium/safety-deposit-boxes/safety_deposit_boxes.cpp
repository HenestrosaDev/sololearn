#include <iostream>
#include <vector>
#include <string>

int calculate_time_to_get_item(const std::vector<std::string>& items, const std::string& item_to_find)
{
    int time = 5;
    for (const auto& item : items)
    {
        if (item != item_to_find)
            time += 5;
        else
            break;
    }

    return time;
}

int main()
{
    // Items input
    std::string items_string;
    std::getline(std::cin, items_string);
    std::vector<std::string> items;
    std::size_t pos = 0;
    std::string delimiter = ",";
    while ((pos = items_string.find(delimiter)) != std::string::npos)
    {
        std::string item = items_string.substr(0, pos);
        items.push_back(item);
        items_string.erase(0, pos + delimiter.length());
    }
    items.push_back(items_string);

    // Item to find input
    std::string item_to_find;
    std::getline(std::cin, item_to_find);

    // Output
    std::cout << calculate_time_to_get_item(items, item_to_find);

    return 0;
}
