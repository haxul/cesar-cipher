
#include <iostream>
#include "Mammal.h"
using namespace std;

Mammal::Mammal() {
    cout << "hello mammal";
}

Mammal::Mammal(uint pow) {
    this->pows = pow;
}

Mammal::Mammal(const Mammal& other) {
    this->pows = other.pows;
}

int Mammal::getPows() {
    return this->pows;
}