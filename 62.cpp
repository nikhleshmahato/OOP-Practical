#include <iostream>
using namespace std;

class Demo {
    int num;
public:
    void Show(int num) {

        this->num = 100;

        cout << "Local num: " << num << endl;
        cout << "Member num (via this): " << this->num << endl;
    }
};

int main() {
    Demo d;
    d.Show(50);
    return 0;
}
