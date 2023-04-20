#include <iostream>

class Animal
{
    public:
        std::string name;
        virtual void speak() {}

};

class Dog: public Animal
{
    public:
        void speak() {
            std::cout << "Woof!" << std::endl;
        }
};

class Cat: public Animal
{
    public:
        void speak() {
            std::cout << "Meaw!" << std::endl;
        }
};

int main() {
    Cat c1;
    c1.name = "Fluffy";

    Dog d1;
    d1.name = "Bingo";

    Animal *a1 = &c1;
    Animal *a2 = &d1;

    Animal* arr[] = {a1, a2};
    for (int i = 0; i < 2; i++)
    {
        arr[i]->speak();
    }
}