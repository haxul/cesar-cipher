#include <iostream>

#ifndef UNTITLED_NUMBER_H
#define UNTITLED_NUMBER_H

using namespace std;

class Number {
public:
    explicit Number(int data);
    int data;
    Number operator+(const Number& other) const;
    friend ostream& operator<<(ostream& s, const Number& number);
};


#endif //UNTITLED_NUMBER_H
