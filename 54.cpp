#include <iostream>
using namespace std;

class Sample {
    int id;
public:
    Sample(int x) {
        id = x;
    }

    Sample(const Sample &s) {
        id = s.id;
        cout << "Copy Constructor Called" << endl;
    }

    void display() {
        cout << "ID: " << id << endl;
    }
};

int main() {
    Sample obj1(100);
    Sample obj2 = obj1; 

    obj1.display();
    obj2.display();

    return 0;
}
