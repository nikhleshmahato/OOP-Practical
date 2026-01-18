#include <iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    Complex() {
        real = 0; imag = 0;
    }

    Complex(int r, int i) {
        real = r; imag = i;
    }

    void show() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1;
    Complex c2(5, 3);

    cout << "c1: "; c1.show();
    cout << "c2: "; c2.show();
    return 0;
}
