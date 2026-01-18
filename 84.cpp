#include <iostream>
using namespace std;

class Shape {
public:
    void showShape() { cout << "This is a shape" << endl; }
};

class Circle : public Shape {
public:
    void showCircle() { cout << "This is a circle" << endl; }
};

class Rectangle : public Shape {
public:
    void showRect() { cout << "This is a rectangle" << endl; }
};

int main() {
    Circle c;
    Rectangle r;

    c.showShape(); 
    c.showCircle();

    r.showShape(); 
    r.showRect();
    return 0;
}
