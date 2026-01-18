#include <iostream>
using namespace std;

class Address {
public:
    string city, state;
    Address(string c, string s) {
        city = c; state = s;
    }
};

class Employee {
    Address* address; 
    string name;
public:
    Employee(string n, Address* addr) {
        name = n;
        address = addr;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Address: " << address->city << ", " << address->state << endl;
    }
};

int main() {
    Address a("New York", "NY");
    Employee e("John", &a);
    e.display();
    return 0;
}
