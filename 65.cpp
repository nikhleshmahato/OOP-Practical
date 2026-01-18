#include <iostream>
using namespace std;

class ClassA {
    int x;
public:
    ClassA() { x = 10; }
    friend class ClassB; 
};

class ClassB {
public:
    void display(ClassA& a) {
        cout << "Accessing private member of ClassA: " << a.x << endl;
    }
};

int main() {
    ClassA a;
    ClassB b;
    b.display(a);
    return 0;
}
