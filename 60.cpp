#include <iostream>
using namespace std;

class Shared {
public:
    static int count;

    Shared() {
        count++;
    }
};

int Shared::count = 0;

int main() {
    cout << "Initial Count: " << Shared::count << endl;
    Shared s1, s2;
    cout << "Count after creating 2 objects: " << Shared::count << endl;
    return 0;
}
