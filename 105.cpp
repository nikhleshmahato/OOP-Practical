#include <iostream>
using namespace std;

class Base {
public:
    void print() { cout << "Base Print" << endl; }
};

class Derived : public Base {
public:
    void print() { cout << "Derived Print" << endl; }
};

int main() {
    Base *b;
    Derived d;
    b = &d;

    b->print(); 

    ((Derived*)b)->print(); 
    return 0;
}
