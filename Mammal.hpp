
#include <sys/types.h>

typedef unsigned int uint;

class Mammal {
public:
    Mammal();
    Mammal(uint pow);
    Mammal(const Mammal& other);
    virtual ~Mammal();
    void feed_milk() const;
    virtual void say();
    static int data;
    const static int sumo = 300;
protected:
    int getPows();
    uint pows = 4;

};


