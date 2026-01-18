#include <iostream>
using namespace std;

class Engine {
public:
    void start() {
        cout << "Engine Started" << endl;
    }
    void stop() {
        cout << "Engine Stopped" << endl;
    }
};

class Car {
    Engine eng; 
public:
    void startCar() {
        eng.start();
        cout << "Car is moving" << endl;
    }
    void stopCar() {
        eng.stop();
        cout << "Car stopped" << endl;
    }
};

int main() {
    Car c;
    c.startCar();
    c.stopCar();
    return 0;
}
