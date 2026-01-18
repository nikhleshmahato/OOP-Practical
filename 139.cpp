#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    int role;
    char name[20];
};

int main() {
    Student s;
    int searchRole;
    bool found = false;

    ofstream outFile("students_search.dat", ios::binary);
    s = {1, "A"}; outFile.write((char*)&s, sizeof(s));
    s = {2, "B"}; outFile.write((char*)&s, sizeof(s));
    s = {3, "C"}; outFile.write((char*)&s, sizeof(s));
    outFile.close();

    cout << "Enter Role Number to search: ";
    cin >> searchRole;

    ifstream inFile("students_search.dat", ios::binary);
    while(inFile.read((char*)&s, sizeof(s))) {
        if(s.role == searchRole) {
            found = true;
            cout << "Record Found: " << s.name << endl;
            break;
        }
    }
    inFile.close();

    if(!found) cout << "Record not found." << endl;
    return 0;
}
