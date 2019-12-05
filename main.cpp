#include <iostream>
#include "Cat.h"
#include "Number.h"
#include <functional>
#include <vector>
#include <algorithm>

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
   vector<int> arr {1,2,3,4,5,6,7};
   auto  iterator = find_if(arr.begin(),arr.end(),[](int a){
       return a > 5;
   });
   if (iterator != arr.end()) {
       cout << *iterator;
   }
    return 0;
}
