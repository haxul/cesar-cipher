#include <iostream>
#include "Cat.h"
using namespace std;
typedef unsigned int uint;

void foo(Mammal* mammal) {
    mammal->say();
}
int main() {
    Mammal* mammal = new Cat();
    Cat* anotherCat = dynamic_cast<Cat*>(mammal);
    anotherCat->say();
    return 0;
}
