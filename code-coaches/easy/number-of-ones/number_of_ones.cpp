#include <iostream>
#include <bitset>

int main() {
    int num;
    std::cin >> num;

    std::bitset<32> num_bin(num);
    int num_of_ones_in_bin = num_bin.count();

    std::cout << num_of_ones_in_bin;

    return 0;
}
