
#include <sys/types.h>
#include "Mammal.hpp"

typedef unsigned int uint;

class Cat: public Mammal {
public:
    Cat();
    Cat(uint pows);
    void say();

private:
    uint vibr = 10;
};
