#include <iostream>

int main()
{
    int aquariumDavid = 8;
    int aquariumAlex = 11;

    // your code goes here
    int tmpAquariumDavid = aquariumDavid;
    aquariumDavid = aquariumAlex;
    aquariumAlex = tmpAquariumDavid;

    std::cout << "David's aquarium: " << aquariumDavid << std::endl;
    std::cout << "Alex's aquarium: " << aquariumAlex;
    return 0;
}