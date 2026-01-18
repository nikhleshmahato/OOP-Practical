#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream inFile("example.txt");
    string line;

    if(inFile.is_open()) {
        cout << "File Content:" << endl;
        while(getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    } else {
        cout << "Error opening file." << endl;
    }
    return 0;
}
