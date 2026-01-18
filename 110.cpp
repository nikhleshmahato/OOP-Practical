#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() { cout << "Base class" << endl; }
};

class Derived : public Base {
public:
    void show() { cout << "Derived class" << endl; }
};

void invoke(Base* b) {

    b->show();
}

int main() {
    Base b;
    Derived d;

    invoke(&b);
    invoke(&d);

    return 0;
}
