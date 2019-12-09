#include <vector>
#include <map>
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


bool Cesar::is_result_saved(void) {
    int action;
    while (true) {
        cin >> action;
        if (action == 1) return true;
        if (action == 2) return false;
        if (cin.fail() || action != 2 || action != 1) {
            cin.clear();
            cin.ignore(32767,'\n');
            cout << "unknown command. Please try again" << endl;
        }
    }
}

void Cesar::show_result_menu() {
    cout << "do you want to save encrypted text as a file?" << endl;
    cout << "1 - yes" << endl;
    cout << "2 - no" << endl;
    bool is_save = Cesar::is_result_saved();
}

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

    map<string, string> map_cipher;

    vector<string>::iterator it = cipher->begin();
    for (int j = 0; j < ALL_AMOUNT_ALPHABET_LETTERS; ++j, it++) {
        map_cipher.insert(make_pair(Cesar::alphabet[j], *it));
    }

    string *result = new string("");

    for (int l = 0; l < text->length(); ++l) {
        string cur_text_letter(1,(*text)[l]);
        if (map_cipher.count(cur_text_letter) > 0) {
            string encrypted_letter = map_cipher[cur_text_letter];
            *result += encrypted_letter;
            continue;
        }
        *result += cur_text_letter;
    }

    cout << *result << endl;
    Cesar::show_result_menu();

    delete rest_letters_size;
    delete shifted_letters_size;
    delete[] shifted_letters;
    delete[] rest_letters;
    delete cipher;
    delete result;
}