#include <iostream>
using namespace std;

class Test {
    int x;
public:
    Test(int val) { x = val; }

    void display() const {
        cout << "Value of x: " << x << endl;

    }
};

int main() {
    Test t(10);
    t.display();
    return 0;
}
