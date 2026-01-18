#include <iostream>
#include <fstream>
using namespace std;

class Student {
    int id;
    string name;
    float marks;
public:
    void getDetails() {
        cout << "Enter ID, Name, Marks: ";
        cin >> id >> name >> marks;
    }

    void showDetails() {
        cout << "ID: " << id << ", Name: " << name << ", Marks: " << marks << endl;
    }
};

int main() {
    Student s;
    char ch;
    ofstream outFile("students.txt", ios::app);

    do {
        s.getDetails();

        outFile.write((char*)&s, sizeof(s)); 
        cout << "Add another student? (y/n): ";
        cin >> ch;
    } while(ch == 'y' || ch == 'Y');

    outFile.close();
    cout << "Data saved." << endl;

    ifstream inFile("students.txt");
    while(inFile.read((char*)&s, sizeof(s))) {
        s.showDetails();
    }
    inFile.close();

    return 0;
}
