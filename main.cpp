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
int foo(int (*f)(int c, int g ) , int b, int d) {
   return f(b, d);
}

int g(int a , int b) {
    return a + b;
}

int main() {
    int (*func) (int a );
    int (*func2) (int a , int b);
    func2 = &g;
    cout << foo(func2, 10, 15);
    return 0;
}
