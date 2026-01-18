#include <iostream>
using namespace std;

class Instrument {
public:
    virtual void play() {
        cout << "Playing instrument..." << endl;
    }
};

class Guitar : public Instrument {
public:
    void play() {
        cout << "Playing Guitar..." << endl;
    }
};

int main() {
    Instrument *i1 = new Guitar();
    i1->play();
    return 0;
}
