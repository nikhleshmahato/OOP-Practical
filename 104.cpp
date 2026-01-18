#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() { cout << "In Base" << endl; }
};

class Derived1 : public Base {
public:
    void show() { cout << "In Derived1" << endl; }
};

class Derived2 : public Base {
public:
    void show() { cout << "In Derived2" << endl; }
};

int main() {
    Base *b;
    Derived1 d1;
    Derived2 d2;

    b = &d1;
    b->show(); 

    b = &d2;
    b->show(); 

    return 0;
}
