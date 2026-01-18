#include <iostream>
using namespace std;

class Student {
protected:
    int roll_no;
public:
    void get_number(int a) { roll_no = a; }
    void put_number() { cout << "Roll No: " << roll_no << "\n"; }
};

class Test : public Student {
protected:
    float part1, part2;
public:
    void get_marks(float x, float y) {
        part1 = x; part2 = y;
    }
    void put_marks() {
        cout << "Marks obtained:\n" << "Part1 = " << part1 << "\nPart2 = " << part2 << "\n";
    }
};

class Result : public Test {
    float total;
public:
    void display() {
        total = part1 + part2;
        put_number();
        put_marks();
        cout << "Total Score = " << total << "\n";
    }
};

int main() {
    Result r;
    r.get_number(111);
    r.get_marks(75.0, 59.5);
    r.display();
    return 0;
}
