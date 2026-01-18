#include <iostream>
using namespace std;

class Rectangle {
    int length, breadth;
public:
    void setDimensions(int l, int b) {
        length = l; breadth = b;
    }
    int area() {
        return length * breadth;
    }
};

int main() {
    Rectangle rect;
    int l, b;
    cout << "Enter length and breadth: ";
    cin >> l >> b;
    rect.setDimensions(l, b);
    cout << "Area of Rectangle: " << rect.area() << endl;
    return 0;
}
