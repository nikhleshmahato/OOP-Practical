#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct Student {
    int id;
    char name[20];
};

int main() {
    Student s;
    int updateId;
    fstream file("students_update.dat", ios::binary | ios::in | ios::out | ios::trunc);

    s = {1, "Alex"}; file.write((char*)&s, sizeof(s));
    s = {2, "Bob"}; file.write((char*)&s, sizeof(s));

    cout << "Enter ID to update: ";
    cin >> updateId;

    file.seekg(0); 
    bool found = false;

    while(file.read((char*)&s, sizeof(s))) {
        if(s.id == updateId) {
            cout << "Enter new name: ";
            cin >> s.name;

            file.seekp(-sizeof(s), ios::cur);
            file.write((char*)&s, sizeof(s));
            found = true;
            break;
        }
    }

    if(found) cout << "Record updated." << endl;
    else cout << "Record not found." << endl;

    file.close();
    return 0;
}
