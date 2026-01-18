#include <iostream>
using namespace std;

class Demo {
    int x;
public:
    Demo(int val) {
        x = val;
    }

    void show() const {
        cout << "Value of x: " << x << endl;
    }
};

int main() {
    const Demo d(100); 
    d.show();

    return 0;
}
