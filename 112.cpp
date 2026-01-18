#include <iostream>
using namespace std;

class Student {
protected:
    int roll;
    string name;
public:
    void getStudent() {
        cout << "Enter Roll & Name: "; cin >> roll >> name;
    }
};

class Exam : public Student {
protected:
    int m1, m2, m3;
public:
    void getMarks() {
        cout << "Enter marks for 3 subjects: "; cin >> m1 >> m2 >> m3;
    }
};

class Result : public Exam {
    int total;
    float avg;
public:
    void calculate() {
        total = m1 + m2 + m3;
        avg = total / 3.0;
    }

    void showResult() {
        cout << "Name: " << name << endl;
        cout << "Total: " << total << ", Average: " << avg << endl;
        if(avg >= 50) cout << "Pass" << endl;
        else cout << "Fail" << endl;
    }
};

int main() {
    Result r;
    r.getStudent();
    r.getMarks();
    r.calculate();
    r.showResult();
    return 0;
}
