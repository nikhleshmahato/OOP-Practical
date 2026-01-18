#include <iostream>
using namespace std;

class Class2; 

class Class1 {
    int data1;
public:
    void setData(int val) { data1 = val; }
    friend void compare(Class1, Class2);
};

class Class2 {
    int data2;
public:
    void setData(int val) { data2 = val; }
    friend void compare(Class1, Class2);
};

void compare(Class1 c1, Class2 c2) {
    if(c1.data1 > c2.data2)
        cout << "Data in Class1 is greater" << endl;
    else if(c1.data1 < c2.data2)
        cout << "Data in Class2 is greater" << endl;
    else
        cout << "Data in both classes is equal" << endl;
}

int main() {
    Class1 obj1;
    Class2 obj2;

    obj1.setData(50);
    obj2.setData(100);

    compare(obj1, obj2);
    return 0;
}
