#include <iostream>

class Product
{
    protected:
        double price;
        int weight;
    public:
        void info() {
            std::cout << price << ", "<< weight;
        }
};

class Fruit : public Product
{
    public:
        std::string type;

        void setInfo(double p, int w)
        {
            price = p;
            weight = w;
        }
};

int main()
{
    Fruit obj;
    obj.type = "Apple";
    obj.setInfo(4.99, 10);
    obj.info();
}