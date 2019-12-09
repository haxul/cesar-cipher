#include <iostream>

#ifndef UNTITLED_CESAR_H
#define UNTITLED_CESAR_H


class Cesar {
public:
    Cesar(std::string text, int shift);

    ~Cesar();

    void encrypt(void);

    static std::string alphabet[28];
private:
    bool is_result_saved(void);

    void show_result_menu(void);

    std::string *text;
    int *shift;
};


#endif //UNTITLED_CESAR_H
