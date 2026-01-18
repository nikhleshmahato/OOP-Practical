#include <iostream>
using namespace std;

class LifeCycle {
public:
    LifeCycle() {
        cout << "Object Created (Constructor)" << endl;
    }

    void work() {
        cout << "Object Working..." << endl;
    }

    ~LifeCycle() {
        cout << "Object Destroyed (Destructor)" << endl;
    }
};

int main() {
    cout << "Entering main..." << endl;
    {
        LifeCycle obj;
        obj.work();
    } 
    cout << "Exiting main..." << endl;
    return 0;
}
