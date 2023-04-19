#include <iostream>
#include <string>

int main() {
    char word[] = {'c', 'h', 'a', 'm', 'p', 'i', 'o', 'n', 's', 'h', 'i', 'p'};

    std::cout << word[0] << word[4] << word[word.end()];

    return 0;
}
