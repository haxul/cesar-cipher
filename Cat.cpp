#include "Cat.h"

#include <iostream>
using namespace std;
typedef unsigned int uint;
Cat::Cat() {}
Cat::Cat(uint pows) : Mammal(pows) {
    this->pows = pows;
}
void Cat::say() {
    cout << "cat says" << endl;
}