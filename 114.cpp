#include <iostream>
using namespace std;

class Employee {
    int id;
    string name;
    double basicSalary;
    double grossSalary;
public:
    void getDetails() {
        cout << "Enter ID, Name, Basic Salary: ";
        cin >> id >> name >> basicSalary;
    }

    void calculateGross() {
        double hra = 0.2 * basicSalary;
        double da = 0.5 * basicSalary;
        grossSalary = basicSalary + hra + da;
    }

    void display() {
        cout << "ID: " << id << ", Name: " << name << ", Gross Salary: " << grossSalary << endl;
    }
};

int main() {
    Employee emp;
    emp.getDetails();
    emp.calculateGross();
    emp.display();
    return 0;
}
