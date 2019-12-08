#include "Cesar.h"

using namespace std;

Cesar::Cesar(string _text , int _shift) {
    text = new string(_text);
    shift =  new int(_shift);
}

Cesar::~Cesar() {
    delete text;
    delete shift;
}

string Cesar::encrypt() {
    cout << *shift << endl;
    cout << *text << endl;
    return "cipher";
}