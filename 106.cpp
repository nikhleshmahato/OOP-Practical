#include <iostream>
using namespace std;

class Base {
public:
    virtual void func() { cout << "Base func" << endl; }
};

class Derived : public Base {
public:
    void func() { cout << "Derived func" << endl; }
};

int main() {
    Base *b = new Derived();
    cout << "Calling virtual function via pointer..." << endl;
    b->func(); 
    return 0;
}
