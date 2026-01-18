#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0; 
};

class Rectangle : public Shape {
    int length, breadth;
public:
    Rectangle(int l, int b) { length = l; breadth = b; }
    void area() {
        cout << "Area of Rectangle: " << length * breadth << endl;
    }
};

class Triangle : public Shape {
    int base, height;
public:
    Triangle(int b, int h) { base = b; height = h; }
    void area() {
        cout << "Area of Triangle: " << 0.5 * base * height << endl;
    }
};

int main() {
    Shape *s;
    Rectangle r(10, 5);
    Triangle t(10, 5);

    s = &r;
    s->area();

    s = &t;
    s->area();

    return 0;
}
