#include <vector>
#include "Cesar.h"

#define ALL_AMOUNT_ALPHABET_LETTERS 26
using namespace std;

Cesar::Cesar(string _text, int _shift) {
    text = new string(_text);
    shift = new int(_shift);
}

Cesar::~Cesar() {
    delete text;
    delete shift;
}

string Cesar::alphabet[] = {
        "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v",
        "w", "x", "y", "z"
};

void Cesar::encrypt() {

    string *shifted_letters = new string[*shift];
    string *rest_letters = new string[ALL_AMOUNT_ALPHABET_LETTERS - *shift];
    vector<string> *cipher = new vector<string>;
    int *rest_letters_size = new int(*shift);
    int *shifted_letters_size = new int(ALL_AMOUNT_ALPHABET_LETTERS - *shift);

    for (int k = 0; k < *shifted_letters_size; ++k) {
        cipher->push_back(Cesar::alphabet[k + *shift]);
    }
    for (int i = 0; i < *rest_letters_size; ++i) {
        cipher->push_back(Cesar::alphabet[i]);
    }

    delete rest_letters_size;
    delete shifted_letters_size;
    delete[] shifted_letters;
    delete[] rest_letters;
    delete cipher;
}