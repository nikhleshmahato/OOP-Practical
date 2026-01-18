#include <iostream>
using namespace std;

class Demo {
private:
    int a;
public:
    int b;

    void setData(int val) {
        a = val;
    }

    void display() {
        cout << "private a: " << a << ", public b: " << b << endl;
    }
};

int main() {
    Demo d;
    d.setData(10);
    d.b = 20;
    d.display();

    return 0;
}
