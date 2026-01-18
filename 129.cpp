#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream inFile("example.txt");
    string word;
    int count = 0;

    if(inFile.is_open()) {
        while(inFile >> word) {
            count++;
        }
        cout << "Total words in file: " << count << endl;
        inFile.close();
    } else {
        cout << "Error opening file." << endl;
    }
    return 0;
}
