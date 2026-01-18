#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ofstream file1("mode_test.txt", ios::out);
    file1 << "Hello ";
    file1.close();

    ofstream file2("mode_test.txt", ios::app);
    file2 << "World!";
    file2.close();

    ifstream file3("mode_test.txt", ios::in);
    string content;
    getline(file3, content);
    cout << "File Content: " << content << endl;
    file3.close();

    return 0;
}
