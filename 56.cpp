#include <iostream>
using namespace std;

class Test {
public:
    Test() {
        cout << "Constructor called" << endl;
    }

    ~Test() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    cout << "Inside Main Function" << endl;
    Test t1;
    {
        cout << "Inside Block" << endl;
        Test t2;
    } 
    cout << "Outside Block" << endl;
    return 0;
} 
