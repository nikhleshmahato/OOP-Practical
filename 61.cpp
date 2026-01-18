#include <iostream>
using namespace std;

class This {
    int x;
public:
    void setX(int x) {
        this->x = x; 
    }
    void print() {
        cout << "Value of x is: " << this->x << endl;
        cout << "Address of object: " << this << endl;
    }
};

int main() {
    This t1;
    t1.setX(20);
    t1.print();
    return 0;
}
