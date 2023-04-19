#include <iostream>
#include <string>

void printOrder(std::string order,std::string defaultOrder = "Black tea") {
    std::cout << defaultOrder;
    std::cout << order << std::endl;
}

int main() {
    std::string friendOrder;
    std::cin >> friendOrder;

    printOrder(friendOrder);

    return 0;
}
