#include <iostream>
using namespace std;

class Test {
    const int x;
public:

    Test(int val) : x(val) {
        cout << "Const member x initialized to: " << x << endl;
    }
};

int main() {
    Test t(100);
    return 0;
}
