#include <iostream>
using namespace std;

class Operations {
    int n1, n2;
public:
    void setInput(int a, int b) {
        n1 = a; n2 = b;
    }
    int add() { 
        return n1 + n2;
    }
    int sub() { 
        return n1 - n2; 
    }
    int mul() { 
        return n1 * n2; 
    }
    float div() { 
        return (float)n1 / n2; 
    }
};

int main() {
    Operations op;
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    op.setInput(a, b);
    cout << "Sum: " << op.add() << endl;
    cout << "Difference: " << op.sub() << endl;
    cout << "Product: " << op.mul() << endl;
    cout << "Quotient: " << op.div() << endl;
    return 0;
}
