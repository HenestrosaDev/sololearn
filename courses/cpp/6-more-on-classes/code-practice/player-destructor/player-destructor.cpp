#include <iostream>

class Player
{
    public:
        int points;

        Player(int x)
        {
            points = x;
            points %= 5;
        }

        ~Player()
        {
            std::cout << points;
        }
};

int main() {
    int points;
    std::cin >> points;
    Player obj(points);
}