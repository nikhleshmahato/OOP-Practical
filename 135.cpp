#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string str = "10 20 30";
    stringstream ss(str);
    int num, sum = 0;

    while(ss >> num) {
        sum += num;
    }

    cout << "Sum of numbers in string: " << sum << endl;
    return 0;
}
