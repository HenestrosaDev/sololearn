#include <iostream>
#include <string>
#include <sstream>
#include <vector>

bool contains_name_buddy(const std::string& names, const std::string& my_name)
{
    std::istringstream iss(names);
    std::string name;
    std::vector<std::string> names_split;

    // Split the group names into individual names
    while (iss >> name)
    {
        names_split.push_back(name);
    }

    // Check if any group member has the same first letter as my name
    for (const auto& name_split : names_split)
    {
        if (name_split[0] == my_name[0])
        {
            return true; // Found a name buddy
        }
    }

    return false;
}

int main() {
    std::string names;
    std::getline(std::cin, names);

    std::string my_name;
    std::getline(std::cin, my_name);

    if (is_name_buddy(names, my_name))
        std::cout << "Compare notes";
    else
        std::cout << "No such luck";

    return 0;
}
