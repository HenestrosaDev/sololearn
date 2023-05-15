#include <iostream>
#include <vector>

std::string get_sound(int num_rice_krispies)
{
    if (num_rice_krispies % 3 == 0)
        return "Pop";
    else if (num_rice_krispies % 2 != 0)
        return "Snap";
    else
        return "Crackle";
}

int main()
{
    std::vector<int> num_rice_krispies_list(6);
    for (int i = 0; i < 6; i++)
    {
        std::cin >> num_rice_krispies_list[i];
    }

    std::vector<std::string> sounds(6);
    for (int i = 0; i < 6; i++)
    {
        sounds[i] = get_sound(num_rice_krispies_list[i]);
    }

    for (const auto& sound : sounds)
    {
        std::cout << sound << " ";
    }

    return 0;
}
