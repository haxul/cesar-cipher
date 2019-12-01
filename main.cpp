#include <iostream>
#include <cstring>
#include "test.h"

#define ONE 1
#define TWO 2
#define SUM(a, b) (a)<0 ? (a)+ (b) : (a)
#define createStr(value) #value

using namespace std;

typedef unsigned int uint;

enum class Color : int {
    red=23, green, blue
};

struct Car {
    string name;
    int age = 45;
    int length;
    int wheels;
    struct SteeringWheel {
        string type;
    };
    SteeringWheel steeringWheel;
};

union Container {
    int number_i;
    double number_d;
};
int main() {

    Container x;
    x.number_d = 15.5;
//    cout << x.number_d << endl << x.number_i << endl;
    x.number_i = 10;
//    cout << endl << x.number_i << endl << x.number_d << endl;

    Car* p_opel;
    p_opel->wheels = 5;
    cout << p_opel << endl << p_opel->wheels;
    Car my_car;
    my_car.name = "opel";
    my_car.length = 1200;
    my_car.wheels = 4;
    Car::SteeringWheel wheel;
    wheel.type = "manual";
    my_car.steeringWheel = wheel;

//    cout << sizeof(Car);

//    cout << my_car.steeringWheel.type << endl;
//    cout << my_car.age << endl << my_car.wheels << endl;

    Color a = Color::blue;
    string output = "";
    switch (a) {
        case Color::green :
            output = "green";
            break;
        case Color::blue :
            output = "blue";
            break;
        case Color::red :
            output = "red";
            break;
    }

//    cout  << output << endl <<  (int) a << endl;
    return 0;
}
