#include <iostream>
using namespace std;

const int Zero = 0;
const int PI = 3.14;
int main() {
    cout << Zero << endl;

    int *p1;
    long *p2;
    long long* p3;
    cout << "p1 sizeof" << sizeof(p1) << endl;
    cout << "p2 sizeof" << sizeof(p2) << endl;
    cout << "p3 sizeof" << sizeof(p3) << endl;

    int a = 10;
    int b = 20;
    long c = 35;

    cout << "a addr" << &a << endl;
    cout << "b addr" << &b<< endl;
    cout << "c addr" << &c << endl;


    p1 = &a;
    p2 = &c;

    cout << "p1 " << p1 << endl;
    cout << "p2 " << p2<< endl;


    return 0;
}
