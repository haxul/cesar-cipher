#include <iostream>
#include "Cat.h"
using namespace std;
typedef unsigned int uint;

void foo  (Mammal* mammal) {
    mammal->say();
}
int Mammal::data = 500;
int main() {
    cout << Mammal::data << endl;
    Mammal* mammal = new Cat();
    Cat* anotherCat = dynamic_cast<Cat*>(mammal);
    anotherCat->say();
    anotherCat->feed_milk();
    return 0;
}
