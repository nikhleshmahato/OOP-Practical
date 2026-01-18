#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile("example.txt");

    if(outFile.is_open()) {
        cout << "File 'example.txt' created successfully." << endl;
        outFile.close();
    } else {
        cout << "Error creating file." << endl;
    }
    return 0;
}
