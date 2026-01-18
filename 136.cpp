#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string filename = "example.txt";
    ifstream ifile(filename);

    if(ifile) {
        cout << "File exists." << endl;
    } else {
        cout << "File does not exist." << endl;
    }
    return 0;
}
