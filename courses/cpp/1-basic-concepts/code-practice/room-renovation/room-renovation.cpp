#include <iostream>

int main()
{
    //sides of the room
    double length;
    std::cin >> length;

    double width;
    std::cin >> width;

    //output the area
    double area = length * width;

    std::cout << area;

	return 0;
}