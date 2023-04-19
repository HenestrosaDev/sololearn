#include <iostream>
#include <string>

void winners(std::string customers[], int size, int nthCustomer)
{
    for (int i = nthCustomer; i < size; i += nthCustomer)
    {
        std::cout << customers[i - 1] << std::endl;
    }
}

int main()
{
    std::string customers[] = {"Alice", "Bob", "Rayan", "Emma", "Ann", "Bruce", "Synthia", "Daniel", "Richard", "Sam", "Nick", "Mary", "Paul"};

    int nthCustomer;
    std::cin >> nthCustomer;

    winners(customers, 13, nthCustomer);

    return 0;
}