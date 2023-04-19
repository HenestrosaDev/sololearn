#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    while (num <= 20) {
        if (num % 3 == 0 && num != 0)
        {
            cout << num << endl;
        }

        num+=1;
    }

    return 0;
}