#include <iostream>

int get_apple_pies(int fruit_count)
{
    int apple_count = fruit_count / 2;
    return apple_count / 3;
}

int main()
{
	int fruit_count;
	std::cin >> fruit_count;

	std::cout << get_apple_pies(fruit_count);

	return 0;
}
