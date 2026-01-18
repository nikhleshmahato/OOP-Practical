#include <iostream>
using namespace std;

int main() {
    char str1[100], str2[100];
    int i = 0;

    cout << "Enter a string: ";
    cin >> str1;

    while(str1[i] != '\0') {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';

    cout << "Copied string: " << str2 << endl;
    return 0;
}
