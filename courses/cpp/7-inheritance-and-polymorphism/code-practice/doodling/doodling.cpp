#include <iostream>

class Shape
{
    public:
        void draw()
        {
            std::cout << "Drawing...";
        }
};

//inherit from Shape
class Rectangle : public Shape
{
    private:
        int width;
        int height;

    public:
        Rectangle(int w, int h): width(w), height(h)
        {
            std::cout << w << "x" << h << std::endl;
        };
};

int main() {
    int x, y;
    std::cin >> x >> y;

    Rectangle d(x, y);
    d.draw();
}