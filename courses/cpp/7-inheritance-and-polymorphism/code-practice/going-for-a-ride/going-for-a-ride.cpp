#include <iostream>

class Vehicle
{
    public:
        virtual void drive() {}
};

class Car: public Vehicle
{
    public:
        void drive()
        {
            std::cout << "Driving a car!" << std::endl;
        }
};

class Bicycle: public Vehicle
{
    public:
        void drive()
        {
            std::cout << "Driving a bicycle!" << std::endl;
        }
};

int main()
{
    Car c;
    Bicycle b;

    Vehicle *v1 = &c;
    Vehicle *v2 = &b;

    v1->drive();
    v2->drive();

    return 0;
}