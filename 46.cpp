#include <iostream>
using namespace std;

class Box {
public:
    int volume;
    void setVolume(int v) {
        volume = v;
    }

    void compare(Box b) {
        if(volume > b.volume) cout << "This box is larger." << endl;
        else if(volume < b.volume) cout << "Other box is larger." << endl;
        else cout << "Both boxes are equal." << endl;
    }
};

int main() {
    Box b1, b2;
    b1.setVolume(50);
    b2.setVolume(70);

    cout << "Comparing b1 with b2: ";
    b1.compare(b2);

    return 0;
}
