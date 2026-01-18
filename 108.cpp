#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() { cout << "Animal Sound" << endl; }
};

class Dog : public Animal {
public:
    void sound() { cout << "Woof" << endl; }
};

class Cat : public Animal {
public:
    void sound() { cout << "Meow" << endl; }
};

int main() {
    Animal* animals[3];

    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Dog();

    for(int i=0; i<3; i++) {
        animals[i]->sound();
    }

    return 0;
}
