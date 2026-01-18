#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile("example.txt");

    if(outFile.is_open()) {
        outFile << "Hello, this is a test file.\n";
        outFile << "This is the second line.\n";
        outFile.close();
        cout << "Data written to file." << endl;
    } else {
        cout << "Error opening file." << endl;
    }
    return 0;
}
