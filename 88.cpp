#include <iostream>
using namespace std;

class Base {
protected:
    int x;
public:
    void setX(int a) { x = a; }
};

class Derived : public Base {
public:
    void showX() {
        cout << "Accessing base class member x: " << x << endl;
    }
};

int main() {
    Derived d;
    d.setX(50);
    d.showX();
    return 0;
}
