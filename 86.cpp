#include <iostream>
using namespace std;

class Base {
public:
    int pub = 10;
protected:
    int prot = 20;
private:
    int priv = 30;
};

class Derived : private Base {
public:
    void show() {
        cout << "Private Inheritance:" << endl;
        cout << "Public becomes private: " << pub << endl;
        cout << "Protected becomes private: " << prot << endl;

    }
};

int main() {
    Derived d;
    d.show();

    return 0;
}
