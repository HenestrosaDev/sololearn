#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

int get_blocks_between_house_and_pond(std::string layout)
{
    // Find the indices of the house and pond, and the indices of all the blocks
    int house_index = layout.find('H');
    int pond_index = layout.find('P');
    std::vector<int> block_indices;

    for (size_t i = 0; i < layout.length(); i++)
    {
        if (layout[i] == 'B')
        {
            block_indices.push_back(i);
        }
    }

    int count = 0;
    for (auto block_index : block_indices)
    {
        if (std::min(house_index, pond_index) < block_index && block_index < std::max(house_index, pond_index))
        {
            count++;
        }
    }

    return count;
}

int main()
{
    std::string layout;
    std::cin >> layout;

    std::cout << get_blocks_between_house_and_pond(layout);

    return 0;
}
