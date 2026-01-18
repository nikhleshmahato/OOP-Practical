#include <iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    void setData(int r, int i) {
        real = r; imag = i;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }

    friend Complex addComplex(Complex, Complex);
};

Complex addComplex(Complex c1, Complex c2) {
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

int main() {
    Complex c1, c2, sum;
    c1.setData(5, 3);
    c2.setData(2, 4);

    sum = addComplex(c1, c2);

    cout << "Sum of complex numbers is: ";
    sum.display();
    return 0;
}
