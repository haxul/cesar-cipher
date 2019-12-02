
#include <sys/types.h>

typedef unsigned int uint;

class Mammal {
public:
    Mammal();
    Mammal(uint pow);
    Mammal(const Mammal &other);
    virtual ~Mammal();
    void feed_milk();
    virtual void say();
protected:
    int getPows();
    uint pows = 4;

};


