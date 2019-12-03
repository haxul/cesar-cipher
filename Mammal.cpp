
#include <iostream>
#include "Mammal.hpp"
using namespace std;

Mammal::Mammal() {

}

Mammal::Mammal(uint pow) {
    this->pows = pow;
}

Mammal::Mammal(const Mammal& other) {
    this->pows = other.pows;
}

Mammal::~Mammal() {
    cout << endl <<"destructor" << endl;
}

int Mammal::getPows() {
    return this->pows;
}

void Mammal::feed_milk() const {
    cout << "i like milk";
}

void Mammal::say() {
    cout << "mammal says" << endl;
}