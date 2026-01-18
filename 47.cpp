#include <iostream>
using namespace std;

class Largest {
    int a, b;
public:
    void setData(int x, int y) {
        a = x; b = y;
    }

    int findLargest() {
        return (a > b) ? a : b;
    }
};

int main() {
    Largest l;
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    l.setData(x, y);
    cout << "Largest number is: " << l.findLargest() << endl;
    return 0;
}
