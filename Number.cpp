

#include "Number.h"

Number::Number(int data) {
    this->data = data;
}

ostream& operator<<(ostream& s, const Number& number) {
    s << "( " << number.data << " )";
    return s;
}
Number Number::operator+(const Number& other) const {
    return Number(other.data + this->data);
}