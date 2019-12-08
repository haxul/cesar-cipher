
#include <string>
#include <iostream>
#include <vector>

class MenuInterface {
private:
    virtual void show_logo(void) = 0;
    virtual void show_commands(void) = 0;
    virtual void chose_option(std::vector<int>::iterator, int&) = 0;
public:
    virtual void open_panel(void) = 0;

};
