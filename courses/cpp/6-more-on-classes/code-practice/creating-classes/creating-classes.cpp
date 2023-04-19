#include <iostream>

class Number
{
    private:
        int num;

    public:
        Number(int num)
        {
            this->num = num;
        }

        int square() const
        {
           return num * num;
        };
};

int main()
{
    int x;
    std::cin >> x;

    const Number myNum(x);
    std::cout << myNum.square();
}