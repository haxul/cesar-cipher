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
    int *rest_letters_size = new int(*shift);
    for (int i = 0; i < *rest_letters_size; ++i) {
        shifted_letters[i] = Cesar::alphabet[i];
    }

    int *shifted_letters_size = new int(ALL_AMOUNT_ALPHABET_LETTERS - *shift);
    for (int k = 0; k < *shifted_letters_size; ++k) {
        rest_letters[k] = Cesar::alphabet[k + *shift];
    }

    std::vector<string> cipher;

    for (int j = 0; j < *rest_letters_size ; ++j) {
        cipher.push_back(rest_letters[j]);
    }
    for (int l = 0; l < *shifted_letters_size ; ++l) {
        cipher.push_back(shifted_letters[l]);
    }

    for(string n : cipher) {
        std::cout << n << '\n';
    }
    delete rest_letters_size;
    delete shifted_letters_size;
    delete[] shifted_letters;
    delete[] rest_letters;
}