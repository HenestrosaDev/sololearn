#include <iostream>

class Bird {
    public:
        void makeSound()
        {
            std::cout << "chirp-chirp";
        }
};


int main() {
    Bird bird;
    bird.makeSound();
    
    return 0;
}