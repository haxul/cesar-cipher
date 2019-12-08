#include <vector>
#include "MenuInterface.h"
#ifndef UNTITLED_MENU_H
#define UNTITLED_MENU_H


class Menu : public MenuInterface{
private:
    void show_logo(void);
    void show_commands(void);
    void chose_option(std::vector<int>::iterator, int&);

public:
    void open_panel(void);

};


#endif //UNTITLED_MENU_H
