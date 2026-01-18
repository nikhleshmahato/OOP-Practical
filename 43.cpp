#include <iostream>
using namespace std;

class Calculator {
public:
    int sum(int x, int y) {
        return x + y;
    }

    int sub(int x, int y);
};

int Calculator::sub(int x, int y) {
    return x - y;
}

int main() {
    Calculator calc;
    cout << "Addition: " << calc.sum(100, 50) << endl;
    cout << "Subtraction: " << calc.sub(100, 50) << endl;
    return 0;
}
