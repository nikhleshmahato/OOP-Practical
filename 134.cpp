#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter integers (Ctrl+Z or Ctrl+D to stop):" << endl;
    while(cin >> n) {
        cout << "You entered: " << n << endl;
    }
    cout << "EOF reached." << endl;
    return 0;
}
