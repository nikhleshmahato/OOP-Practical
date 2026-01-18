#include <iostream>
#include <fstream>
using namespace std;

class Student {
public:
    int roll;
    char name[20];

    void getData() {
        cout << "Enter Roll: "; cin >> roll;
        cout << "Enter Name: "; cin >> name;
    }

    void showData() {
        cout << "Name: " << name << ", Roll: " << roll << endl;
    }
};

int main() {
    Student s;
    fstream file;

    file.open("student.dat", ios::binary | ios::out);
    s.getData();
    file.write((char*)&s, sizeof(s));
    file.close();

    file.open("student.dat", ios::binary | ios::in);
    file.read((char*)&s, sizeof(s));
    s.showData();
    file.close();

    return 0;
}
