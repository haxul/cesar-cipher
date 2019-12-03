#include <iostream>
#include "Cat.h"
using namespace std;
typedef unsigned int uint;

void foo  (Mammal* mammal) {
    mammal->say();
}
int Mammal::data = 500;

class A {
public:
    virtual void foo() = 0;
};

class B : public A {
public:
    void foo() {
        cout << "hello foo" << endl;
    }
};

int main() {
    B b;
    b.foo();
    cout << Mammal::data << endl;
    cout << Mammal::sumo << endl;
    Mammal* mammal = new Cat();
    Cat* anotherCat = dynamic_cast<Cat*>(mammal);
    anotherCat->say();
    anotherCat->feed_milk();
    return 0;
}
