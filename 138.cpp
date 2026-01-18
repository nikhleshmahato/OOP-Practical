#include <iostream>
#include <fstream>
using namespace std;

struct Employee {
    int id;
    char name[20];
    float salary;
};

int main() {
    Employee e1 = {101, "Alice", 50000.5};
    Employee e2;

    ofstream outFile("employee.dat", ios::binary);
    outFile.write((char*)&e1, sizeof(e1));
    outFile.close();

    ifstream inFile("employee.dat", ios::binary);
    inFile.read((char*)&e2, sizeof(e2));
    inFile.close();

    cout << "Employee ID: " << e2.id << endl;
    cout << "Name: " << e2.name << endl;
    cout << "Salary: " << e2.salary << endl;
    return 0;
}
