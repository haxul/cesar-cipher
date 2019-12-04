#include <iostream>
#include "Cat.h"
#include "Number.h"
#include <functional>

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

class Functor {
public:
    void operator()() {cout << "hello from functor" << endl;};
};

int main() {
    int arr[10] {};
    auto la = [&arr](string h){
        arr[2] = 10;
        cout << h << endl;
    };
    la("hello lambda");
//    [&arr](int a){arr[2] = 10;}(1);
    cout << arr[2] << endl;
    function<int(int, int)> func_sum;
    func_sum = g;
    cout << func_sum(1,3) << endl;
    Functor functor;
    functor();
    int (*func) (int a );
    int (*func2) (int a , int b);
    func2 = &g;
    cout << foo(func2, 10, 15);
    return 0;
}
