#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream source("example.txt");
    ofstream destination("copy_example.txt");
    char ch;

    if(source.is_open() && destination.is_open()) {
        while(source.get(ch)) {
            destination.put(ch);
        }
        cout << "File copied successfully." << endl;
        source.close();
        destination.close();
    } else {
        cout << "Error opening files." << endl;
    }
    return 0;
}
