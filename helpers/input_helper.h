
#ifndef UNTITLED_INPUT_HELPER_H
#define UNTITLED_INPUT_HELPER_H

#include <iostream>

void clear_cin() {
    std::cin.clear();
    std::cin.ignore(32767,'\n');
}

#endif //UNTITLED_INPUT_HELPER_H
