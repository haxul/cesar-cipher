#include "Menu.h"
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>
#include "../encryptions/cesar/Cesar.h"
#include "../helpers/input_helper.h"
#include "../encryptions/cesar/begin_encyption.h"

using namespace std;

void Menu::show_logo() {
    string row_1 = "******  **  ****** **  **  ******  ******";
    string row_2 = "*       **  *    * **  **  *       *    *";
    string row_3 = "*       **  ****** ******  ******  ******";
    string row_4 = "*       **  *      **  **  *       *  *  ";
    string row_5 = "******  **  *      **  **  ******  *    *";

    string rows[5]{row_1, row_2, row_3, row_4, row_5};
    for (string row : rows) {
        cout << row << std::endl;
    }
}

void Menu::show_commands() {
    cout << "Welcome! Choose encrypt algorithm :" << endl;
    cout << "2 - cesar encrypt" << endl;
    cout << "1 - exit" << endl;
}

void Menu::chose_option(vector<int>::iterator it, int &option) {
    switch (*it) {
        case 1:
            cout << "have a good day";
            exit(10);
        case 2:
            begin_cesar_encryption();
            break;
        default:
            cout << "unknown command. Please try again" << endl << "Enter: ";
            break;
    }
}

void Menu::open_panel() {
    Menu::show_logo();
    Menu::show_commands();

    vector<int> options{1, 2};
    vector<int>::iterator it;

    int option;

    while (true) {
        cout << "Enter command: " << endl;
        cin >> option;
        if (cin.fail()) {
            clear_cin();
            cout << "What a fuck man? I've asked you to enter numbers" << endl << "Enter: ";
            continue;
        }
        it = find(options.begin(), options.end(), option);
        Menu::chose_option(it, option);
    }
}

