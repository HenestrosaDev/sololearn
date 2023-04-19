#include <iostream>

class Engine
{
    public:
        Engine(int p): power(p) {};

        void start()
        {
            std::cout << "Engine ON (" << power << " horsepower)";
        }
    private:
        int power;
};

class Car
{
    public:
        Car(Engine& e, std::string c, int y): engine(e), color(c), year(y) {};

        void start()
        {
            std::cout << "Starting" << std::endl;
            engine.start();
        }

    private:
        Engine engine;
        std::string color;
        int year;
};

int main() {
    int power, year;
    std::string color;
    std::cin >> power >> color >> year;

    Engine engine(power);
    Car car(engine, color, year);
    car.start();
}
