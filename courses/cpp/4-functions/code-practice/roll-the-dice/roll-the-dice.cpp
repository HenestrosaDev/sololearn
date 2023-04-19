#include <iostream>
using namespace std;

int max(int num1, int num2)
{
    if (num1 > num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}

int main()
{
    int first;
    cin >> first;

    int second;
    cin >> second;

    int maxNum = max(first, second);
    std::cout << maxNum;

    return 0;
}