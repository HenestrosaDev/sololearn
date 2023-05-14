#include <iostream>
#include <vector>

std::string get_initials(std::string name)
{
    std::vector<std::string> name_split;
    std::string delimiter = " ";
    size_t pos = 0;
    while ((pos = name.find(delimiter)) != std::string::npos)
    {
        name_split.push_back(name.substr(0, pos));
        name.erase(0, pos + delimiter.length());
    }
    name_split.push_back(name);

    return name_split[0].substr(0, 1) + name_split[1].substr(0, 1);
}

int main()
{
    int num_names;
    std::cin >> num_names;
    std::cin.ignore(); // Consume the newline character after the integer input

    // Getting the initials
    std::vector<std::string> names(num_names);
    std::vector<std::string> initials(num_names);
    for (int i = 0; i < num_names; i++)
    {
        getline(std::cin, names[i]);
        initials[i] = get_initials(names[i]);
    }

    // Printing the initials
    std::cout << initials[0];
    for (int i = 1; i < num_names; i++)
    {
        std::cout << " " << initials[i];
    }
    return 0;
}