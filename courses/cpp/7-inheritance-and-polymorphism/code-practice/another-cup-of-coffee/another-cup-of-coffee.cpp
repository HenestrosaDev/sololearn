#include <iostream>

class Drink
{
    protected:
        int price;

    public:
        void setPrice(int a)
        {
            price = a;
        }
};

class Coffee : public Drink
{
    public:
        void make()
        {
            std::cout << "Coffee: "<< price << std::endl;
        }
};

class Tea : public Drink
{
    public:
        void make()
        {
            std::cout << "Tea: " << price << std::endl;
        }
};

int main() {
    Coffee c;
    Tea t;

    Drink *e1 = &c;
    Drink *e2 = &t;

    c.setPrice(5);
    t.setPrice(6);

    c.make();
    t.make();
}