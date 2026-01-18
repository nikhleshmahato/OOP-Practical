#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int *ptr;

    ptr = &num;
    //demonstration
    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Value stored in ptr: " << ptr << endl;
    cout << "Value pointed to by ptr: " << *ptr << endl;

    return 0;
}
