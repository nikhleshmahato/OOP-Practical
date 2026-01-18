#include <iostream>
using namespace std;

class Base {
public:
    Base() { cout << "Base Constructor" << endl; }
};

class Derived : public Base {
public:
    Derived() { cout << "Derived Constructor" << endl; }
};

int main() {
    cout << "Creating Derived object:" << endl;
    Derived d;
    return 0;
}
