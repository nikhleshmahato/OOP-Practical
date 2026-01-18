#include <iostream>
#include <fstream>
using namespace std;

struct Item {
    int id;
    char name[20];
};

int main() {
    Item it;
    int delId;

    ofstream f1("items.dat", ios::binary);
    it = {101, "Pen"}; f1.write((char*)&it, sizeof(it));
    it = {102, "Pencil"}; f1.write((char*)&it, sizeof(it));
    f1.close();

    cout << "Enter ID to delete: ";
    cin >> delId;

    ifstream inFile("items.dat", ios::binary);
    ofstream outFile("temp.dat", ios::binary);

    while(inFile.read((char*)&it, sizeof(it))) {
        if(it.id != delId) {
            outFile.write((char*)&it, sizeof(it));
        }
    }

    inFile.close();
    outFile.close();

    remove("items.dat");
    rename("temp.dat", "items.dat");

    cout << "Record deleted." << endl;
    return 0;
}
