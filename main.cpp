#include <iostream>
#include "Cat.h"
#include "Number.h"

using namespace std;
typedef unsigned int uint;

void foo(Mammal *mammal) {
    mammal->say();
}

int Mammal::data = 500;


class Test {
public:
    int data = 10;
};

template<typename T>
class Hello {
public:

    Hello(T* d) {
        this->f = d;
    }

    T* f;
};

int main() {
    return 0;
}
