#include <iostream>

class Point
{
    public:
        Point(int a, int b): x(a), y(b) {};

        void print()
        {
            std::cout << x << ", " << y;
        }

    private:
        int x;
        int y;

    friend void shift(Point &p, int step);
};

void shift(Point &p, int step)
{
    p.x += step;
    p.y += step;
}

int main()
{
    int x, y;
    std::cin >> x >> y;
    Point p(x, y);

    int step;
    std::cin >> step;
    shift(p, step);

    p.print();
}
