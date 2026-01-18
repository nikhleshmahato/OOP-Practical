#include <iostream>
using namespace std;

class A {
    int x = 10;
    friend class B; 
};

class B {
public:
    void showA(A& a) {
        cout << "B accessing A's private: " << a.x << endl;
    }
};

class C {
public:
    void showB(B& b) {

        cout << "C cannot access B or A's private members implicitly." << endl;
    }
};

int main() {
    A objA;
    B objB;
    objB.showA(objA);

    cout << "Friendship is not mutual/transitive demonstrated." << endl;
    return 0;
}
