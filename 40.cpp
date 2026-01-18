#include <iostream>
using namespace std;

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s1;

    cout << "Enter name: ";
    cin >> s1.name;
    cout << "Enter roll number: ";
    cin >> s1.roll;
    cout << "Enter marks: ";
    cin >> s1.marks;

    cout << "\nStudent Details:" << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Roll: " << s1.roll << endl;
    cout << "Marks: " << s1.marks << endl;

    return 0;
}
