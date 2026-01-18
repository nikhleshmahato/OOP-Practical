#include <iostream>
using namespace std;

class Point {
    int x, y;
public:
    Point(int a, int b) {
        x = a;
        y = b;
    }

    void display() {
        cout << "Point(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p(10, 20);
    p.display();
    return 0;
}
