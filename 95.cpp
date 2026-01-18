#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    int id;
public:
    void getEmp(string n, int i) {
        name = n; id = i;
    }
    void putEmp() {
        cout << "Name: " << name << ", ID: " << id << endl;
    }
};

class Salary : public Employee {
    float basic, hra, da, netSalary;
public:
    void getPay(float b, float h, float d) {
        basic = b; hra = h; da = d;
    }
    void calculate() {
        netSalary = basic + hra + da;
    }
    void displayPay() {
        putEmp();
        cout << "Basic: " << basic << ", HRA: " << hra << ", DA: " << da << endl;
        cout << "Net Salary: " << netSalary << endl;
    }
};

int main() {
    Salary s;
    s.getEmp("Alice", 101);
    s.getPay(5000, 2000, 1000);
    s.calculate();
    s.displayPay();
    return 0;
}
