#include <iostream>

int main()
{
    std::string arr[3][3] = {
        {"Python", "JS", "C++"},
        {"PHP", "SQL", "Java"},
        {"C#", "Swift", "Kotlin"},
    };

    std::cout << arr[0][2];

    return 0;
}