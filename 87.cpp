#include <iostream>
using namespace std;

class Base {
public:
    int pub = 10;
protected:
    int prot = 20;
};

class Derived : protected Base {
public:
    void show() {
        cout << "Protected Inheritance:" << endl;
        cout << "Public becomes protected: " << pub << endl;
        cout << "Protected remains protected: " << prot << endl;
    }
};

int main() {
    Derived d;
    d.show();

    return 0;
}
