#include <iostream>
#include <string>
#include <vector>
#include <cmath>

int calculate_moves(const std::string& map_str)
{
    std::vector<std::string> map_rows;
    size_t start = 0, end;
    while ((end = map_str.find(',', start)) != std::string::npos)
    {
        map_rows.push_back(map_str.substr(start, end - start));
        start = end + 1;
    }
    map_rows.push_back(map_str.substr(start));

    size_t num_map_rows = map_rows.size();

    char letter_to_find = 'P';
    std::pair<int, int> p1, p2;

    for (size_t i = 0; i < num_map_rows; ++i)
    {
        for (size_t j = 0; j < num_map_rows; ++j)
        {
            if (map_rows[i][j] == letter_to_find)
            {
                if (p1.first == 0 && p1.second == 0)
                    p1 = std::make_pair(i, j);
                else
                    p2 = std::make_pair(i, j);
            }
        }
    }

    // Calculate the number of moves using Manhattan distance formula
    int moves = std::abs(p1.first - p2.first) + std::abs(p1.second - p2.second);

    return moves;
}

int main()
{
    std::string map_str;
    std::cin >> map_str;
    std::cout << calculate_moves(map_str) << std::endl;
    return 0;
}
