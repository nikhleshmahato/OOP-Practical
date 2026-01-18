#include <iostream>
using namespace std;

class A {
public:
    int a;
};

class B : virtual public A {
};

class C : virtual public A {
};

class D : public B, public C {
};

int main() {
    D obj;
    obj.a = 100; 
    cout << "Value of a: " << obj.a << endl;
    return 0;
}
