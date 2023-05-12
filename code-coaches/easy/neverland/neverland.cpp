#include <iostream>

int main()
{
    int initial_age, years_passed;
    std::cin >> initial_age >> years_passed;
    int final_age = initial_age + years_passed;

    std::cout << "My twin is " << final_age << " years old and they are " << years_passed << " years older than me";

    return 0;
}
