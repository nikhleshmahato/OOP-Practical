#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int num1 = 123456;

    ofstream outFile("binary_test.dat", ios::binary);
    outFile.write((char*)&num1, sizeof(num1));
    outFile.close();

    int num2;
    ifstream inFile("binary_test.dat", ios::binary);
    inFile.read((char*)&num2, sizeof(num2));
    inFile.close();

    cout << "Read from binary file: " << num2 << endl;
    return 0;
}
