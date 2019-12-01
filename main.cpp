#include <iostream>
#include <cstring>
#include "test.h"
#define ONE 1
#define TWO 2
#define SUM(a,b) (a)<0 ? (a)+ (b) : (a)
#define createStr(value) #value

using namespace std;

double python(int);
double java(int);

int estimate(int lines, double pfunc(int)) {
    return lines * pfunc(lines);
}

namespace Name {
    int mul(int* a, int* b) {
        return *a + *b;
    }
}

using namespace Name;

int main() {

    string some = createStr(hello world);
    cout << some << endl;
    int x = 10, y = 20;
    cout << mul(&x , &y);
    int result = SUM(11, 10);
    cout << endl << result;

//    string city = "samara";
//    string result = city + " hello";
//    getline(cin, city);

//    cout << result << endl << city.size();
//    double result = estimate(5, python);
//    cout << result;
//    int a = 88432;
//    int* b = &a;
//    int &c = a;
//    cout << c;
//    int* list = new int[5];
//    for (int i = 0; i < 5; ++i) {
//        *(list + i) = (i + 100) * 3;
//    }
//
//    for (int j = 0; j < 5; ++j) {
//        cout << list[j] << endl;
//    }
//    int* list = new int[1];
//    int list2[4] ;
//    int list3[] = {1,2,3,4,5};
//    int list4[] {1,2,3,4,7,5};
//    for (int j = 0; j < sizeof(list4)/ sizeof(*list); ++j) {
//        cout << *(list4+j) << endl;
//    }
//    int* arr[3];
//    int a = 1;
//    int b =3 ,x = 4;
//    *arr = &a;
//    *(arr + 1) = &b;
//    *(arr + 2 ) = &x;
//    int c = 100;
//    int* u = &c;
//    *u = 250;
//    char h[20] = "hello world";
//    cout << strlen(h);
//    for (int i = 0; i < 3 ; ++i) {
//        cout << arr[i] << endl;
//    }



    return 0;
}

double python(int h) {
    return h * 10;
}

double java(int h) {
    return h * 11;
}
