#include <iostream>
using namespace std;

class Area {
public:
    Area() {
        cout << "No arguments passed" << endl;
    }

    Area(int s) {
        cout << "Area of Square: " << s * s << endl;
    }

    Area(int l, int b) {
        cout << "Area of Rectangle: " << l * b << endl;
    }
};

int main() {
    Area a1;
    Area a2(5);
    Area a3(4, 6);
    return 0;
}
