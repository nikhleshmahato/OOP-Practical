#include <iostream>
using namespace std;

class ClassB; 

class ClassA {
    int numA;
public:
    void setA(int a) { numA = a; }
    friend int add(ClassA, ClassB);
};

class ClassB {
    int numB;
public:
    void setB(int b) { numB = b; }
    friend int add(ClassA, ClassB);
};

int add(ClassA objectA, ClassB objectB) {
    return objectA.numA + objectB.numB;
}

int main() {
    ClassA a;
    ClassB b;

    a.setA(10);
    b.setB(20);

    cout << "Sum: " << add(a, b) << endl;
    return 0;
}
