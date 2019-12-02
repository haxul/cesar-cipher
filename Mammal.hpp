
#include <sys/types.h>

typedef  unsigned int uint;

class Mammal {
public:
    Mammal();
    Mammal(uint pow);
    Mammal(const Mammal& other);
    ~Mammal();
    void feed_milk();
    int getPows();
private:
    uint pows = 4;
};


