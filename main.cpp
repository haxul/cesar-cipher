#include <iostream>
#include "Mammal.hpp"

using namespace std;
int main() {
    Mammal mammal(5);
    Mammal mammal1 = mammal;
    Mammal* mammal2 = new Mammal(11);
    cout << mammal2->getPows() << endl;
//    std::cout << mammal1.getPows();
    return 0;
}
