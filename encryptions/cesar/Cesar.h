#include <iostream>

#ifndef UNTITLED_CESAR_H
#define UNTITLED_CESAR_H


class Cesar {
public:
    Cesar(std::string text, int shift);
    ~Cesar();
    void encrypt(void);
    static std::string  alphabet[28];
private:
    std::string *text;
    int *shift;
};


#endif //UNTITLED_CESAR_H
