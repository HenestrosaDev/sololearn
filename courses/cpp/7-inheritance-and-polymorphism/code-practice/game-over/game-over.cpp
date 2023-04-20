#include <iostream>

class Game
{
    public:
        Game()
        {
            std::cout << "Game Started" << std::endl;
        }

        ~Game()
        {
            std::cout << "Game Over" << std::endl;
        }

};

class Quiz : public Game
{
    public:
        Quiz()
        {
            std::cout << "Quiz Started" << std::endl;
        }

        ~Quiz()
        {
            std::cout << "Quiz Over" << std::endl;
        }

};

int main()
{
    Quiz q;
}