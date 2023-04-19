#include <iostream>

int main()
{
    int count = 300; // letter in a minute
    int time;
    std::cin >> time;

    //your code goes here
    count *= time;

    std::cout << count << std::endl;

	return 0;
}