#include <iostream>
#include <string>
#include <sstream>

int calculate_area(std::string balcony) {
    std::stringstream ss(balcony);
    std::string token;
    getline(ss, token, ',');

    int length = stoi(token);
    getline(ss, token, ',');

    int width = stoi(token);
    return length * width;
}

int main() {
    std::string balcony_a, balcony_b;
    getline(std::cin, balcony_a);
    getline(std::cin, balcony_b);

    int area_a = calculate_area(balcony_a);
    int area_b = calculate_area(balcony_b);

    if (area_a > area_b)
        std::cout << "Apartment A";
    else
        std::cout << "Apartment B";

    return 0;
}
