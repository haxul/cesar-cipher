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

template <typename T>
T bar(T a, T b) {
    return a + b;
}
template <typename T1, typename T2>
auto bar(T1 a , T2 b) -> decltype(a+b) {
    return a + b;
}
template <typename K = int>
class Test {
public:
    void process() {
        cout << a * 100 << endl;
    }
    K a;
};

template <>
class Test<string> {
public:
    void process() {
        cout << a + a << endl;
    }
    string a;
};
int main() {
    Test<string> test;
    test.a = "hello";
    test.process();
    cout << bar(1, 2) << endl;
    cout << bar(1, 1.1) << endl;
    Number number1(3);
    cout << number1 << endl;
    Number* number = new Number(10);
    cout << *number << endl;
    delete number;
    return 0;
}
