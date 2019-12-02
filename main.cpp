#include <iostream>
#include "Mammal.h"

int main() {
    Mammal mammal(5);
    Mammal mammal1 = mammal;
    std::cout << mammal1.getPows();
    return 0;
}
