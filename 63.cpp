#include <iostream>
using namespace std;

class Box {
    int width;
public:
    void setWidth(int w) {
        width = w;
    }

    friend void printWidth(Box b);
};

void printWidth(Box b) {

    cout << "Width of box: " << b.width << endl;
}

int main() {
    Box box;
    box.setWidth(10);
    printWidth(box);
    return 0;
}
