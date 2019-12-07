#include "Menu.h"
#include <string>
#include <iostream>

using namespace std;

void Menu::show_logo() {
    std::string row_1 = "******  **  ****** **  **  ******  ******";
    std::string row_2 = "*       **  *    * **  **  *       *    *";
    std::string row_3 = "*       **  ****** ******  ******  ******";
    std::string row_4 = "*       **  *      **  **  *       *  *  ";
    std::string row_5 = "******  **  *      **  **  ******  *    *";

    std::string rows[5] {row_1, row_2, row_3, row_4, row_5};
    for (std::string row : rows ) {
        std::cout << row << std::endl;
    }
}

void Menu::open_panel() {
    Menu::show_logo();
    cout << "Welcome! Choose encrypt algorithm :" << endl;
    cout << "0 - cesar encrypt" << endl;
    int *existed_algorithms = new int[1];
    int algorithm_number;
    cin >> algorithm_number;
    cout << algorithm_number;
}

