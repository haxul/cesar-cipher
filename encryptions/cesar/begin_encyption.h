#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>
#include "Cesar.h"
#include "../../helpers/input_helper.h"

using namespace std;

#ifndef UNTITLED_BEGIN_ENCYPTION_H
#define UNTITLED_BEGIN_ENCYPTION_H

void begin_cesar_encryption() {
    string text;
    int shift;
    cout << "cesar algorithm is starting..." << endl;
    cout << "enter text: " << endl;
    clear_cin();
    getline(cin , text);
    while(true) {
        cout << "enter shift: " << endl;
        cin >> shift;
        if (cin.fail() || shift > 26 || shift < 0) {
            clear_cin();
            cout << "Only numbers. 0 > Number <= 26" << endl;
            continue;
        }
        break;
    }
    Cesar cipher(text, shift);
    cipher.encrypt();
}

#endif //UNTITLED_BEGIN_ENCYPTION_H
