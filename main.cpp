#include <iostream>
#include "test.h"

using namespace std;
double python(int);
double java(int);

int estimate(int lines, double pfunc(int)) {
    return lines * pfunc(lines);
}
int main() {
    double result = estimate(5, python);
    cout << result;
    return 0;
}

double python(int h) {
    return h * 10;
}

double java(int h) {
    return h * 11;
}
