#include <iostream>
#include "Cat.h"
#include "Number.h"
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

class C {
private:
    int a = 10;
    int getA() {
        return a;
    }
    friend B;
};

int main() {
    Number number1 = Number(3);
    cout << number1 << endl;
    Number* number = new Number(10);
    cout << *number << endl;
    delete number;
    return 0;
}
