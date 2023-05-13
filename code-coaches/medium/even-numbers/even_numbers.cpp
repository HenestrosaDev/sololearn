#include <iostream>
#include <vector>
#include <sstream>
#include <iterator>

std::string get_evens_str(std::string nums_str)
{
    std::istringstream iss(nums_str);
    std::vector<std::string> nums_list(std::istream_iterator<std::string>{iss}, std::istream_iterator<std::string>());

    std::vector<std::string> even_nums_list;
    for (auto num_str : nums_list)
    {
        int num = std::stoi(num_str);
        if (num % 2 == 0)
        {
            even_nums_list.push_back(num_str);
        }
    }

    std::string even_nums_str = "";
    for (auto even_num_str : even_nums_list)
    {
        even_nums_str += even_num_str + " ";
    }
    even_nums_str.pop_back(); // remove the extra space at the end

    return even_nums_str;
}

int main()
{
    std::string nums_str;
    std::getline(std::cin, nums_str); // read input string from stdin

    std::cout << get_evens_str(nums_str); // print the result to stdout

    return 0;
}
