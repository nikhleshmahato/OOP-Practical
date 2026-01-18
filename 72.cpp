#include <iostream>
using namespace std;

class Test {
    static int count;
    int code;
public:
    void setCode() {
        code = ++count;
    }

    void showCode() {
        cout << "Object number: " << code << endl;
    }

    static void showCount() {
        cout << "Count: " << count << endl;
    }
};

int Test::count = 0;

int main() {
    Test t1, t2;

    t1.setCode();
    t2.setCode();

    Test::showCount(); 

    Test t3;
    t3.setCode();

    Test::showCount();

    t1.showCode();
    t2.showCode();
    t3.showCode();

    return 0;
}
