#include <iostream>
using namespace std;

class ClassY;

class ClassX {
    int val1;
public:
    void setData(int v) { val1 = v; }
    void display() { cout << "ClassX: " << val1 << endl; }
    friend void swap(ClassX&, ClassY&);
};

class ClassY {
    int val2;
public:
    void setData(int v) { val2 = v; }
    void display() { cout << "ClassY: " << val2 << endl; }
    friend void swap(ClassX&, ClassY&);
};

void swap(ClassX& x, ClassY& y) {
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}

int main() {
    ClassX x;
    ClassY y;

    x.setData(10);
    y.setData(20);

    cout << "Before Swap:" << endl;
    x.display();
    y.display();

    swap(x, y);

    cout << "\nAfter Swap:" << endl;
    x.display();
    y.display();
    return 0;
}
