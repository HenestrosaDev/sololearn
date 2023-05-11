#include <iostream>

int main()
{
    int total_eggs, eggs_found_by_me, eggs_found_by_friend;
    std::cin >> total_eggs >> eggs_found_by_me >> eggs_found_by_friend;

    int eggs_found = eggs_found_by_me + eggs_found_by_friend;
    if (eggs_found == total_eggs)
        std::cout << "Candy Time";
    else
        std::cout << "Keep Hunting";

    return 0;
}
