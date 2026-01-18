#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile("example.txt", ios::app); 

    if(outFile.is_open()) {
        outFile << "Appended Line 1.\n";
        outFile << "Appended Line 2.\n";
        cout << "Data appended successfully." << endl;
        outFile.close();
    } else {
        cout << "Error opening file." << endl;
    }
    return 0;
}
