#include <iostream>

class Car
{
    private:
        int horsepowers;

    public:
        void setHorsepowers(int horsepowers)
        {
            if (horsepowers > 800)
            {
                std::cout << "Too much";
            }

            this->horsepowers = horsepowers;
        }

        int getHorsepowers()
        {
            return horsepowers;
        }
};


int main() {
    int horsepowers;
    std::cin >> horsepowers;

    Car car;
    car.setHorsepowers(horsepowers);
    std::cout << car.getHorsepowers();

    return 0;
}