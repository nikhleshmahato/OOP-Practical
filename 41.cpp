#include <iostream>
using namespace std;

class Student {
public:
    int id;
    string name;

    void display() {
        cout << "id: " << id << ", Name: " << name << endl;
    }
};

int main() {
    Student s1;
    s1.id = 11;
    s1.name = "Nik";

    s1.display();
    return 0;
}
