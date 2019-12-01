#include <iostream>
#include <cstring>
#include "test.h"
#define ONE 1
#define TWO 2
#define SUM(a,b) (a)<0 ? (a)+ (b) : (a)
#define createStr(value) #value

typedef unsigned int uint;
enum Color {red, green, blue};
using namespace std;

int main() {

    Color a = Color::blue;
    return 0;
}
