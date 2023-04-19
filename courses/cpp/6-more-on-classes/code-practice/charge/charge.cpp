#include <iostream>

class Phone
{
    public:
        int charge;

        Phone()
        {
            charge = 100;
        }

        void use()
        {
            charge -=10;
        }

        void getCharge()
        {
            std::cout << charge;
        }
};

int main()
{
    Phone p;
    p.use();
    Phone *ptr = &p;

    ptr->getCharge();
}