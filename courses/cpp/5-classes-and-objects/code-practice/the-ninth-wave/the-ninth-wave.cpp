#include <iostream>
#include <string>

class Painting
{
    public:
        Painting(std::string name)
        {
            std::cout << name;
        }
};

int main()
{
    std::string name;
    std::cin >> name;

    Painting painting(name);

    return 0;
}