#include <iostream>
#include "Cat.h"
using namespace std;
typedef unsigned int uint;

void foo(Mammal* mammal) {
    mammal->say();
}
int main() {
    Cat* cat = new Cat(5);
    Mammal* mammal = new Mammal();
//    mammal->say();
//    cat->say();
//    char a = 6;
//    char* b = &a;
//    cout << sizeof(a) << endl;
//    cout << sizeof(*b) << endl;
    Mammal* mammal1 = new Cat();
    Mammal* mammal2 = new Mammal();
//    Mammal* list[2];
//    list[0] = mammal1;
//    list[1] = mammal2;
//    for (int i = 0; i < 2; ++i) {
//        list[i]->say();
//    }
    foo(mammal1);
    foo(mammal2);
    return 0;
}
