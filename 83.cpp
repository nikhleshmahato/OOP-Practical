#include <iostream>
using namespace std;

class ClassA {
public:
    void displayA() { cout << "Class A" << endl; }
};

class ClassB {
public:
    void displayB() { cout << "Class B" << endl; }
};

class ClassC : public ClassA, public ClassB {
public:
    void displayC() { cout << "Class C" << endl; }
};

int main() {
    ClassC obj;
    obj.displayA();
    obj.displayB();
    obj.displayC();
    return 0;
}
