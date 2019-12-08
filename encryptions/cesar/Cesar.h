#include <iostream>

#ifndef UNTITLED_CESAR_H
#define UNTITLED_CESAR_H


class Cesar {
public:
    Cesar(std::string text, int shift);
    ~Cesar();
    std::string encrypt(void);
private:
    std::string *text;
    int *shift;
};


#endif //UNTITLED_CESAR_H
