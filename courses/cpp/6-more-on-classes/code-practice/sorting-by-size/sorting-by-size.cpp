#include <iostream>

class TV
{
    public:
        TV(int h, int w): height(h), width(w) {};

        void area()
        {
            std::cout << height * width;
        }

    private:
        int height;
        int width;
};

int main()
{
    int width, height;
    std::cin >> width;
    std::cin >> height;

    TV tv(width, height);
    tv.area();
}
