#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double pi = 3.1415926535;

    cout << "Formatting with setw:" << endl;
    cout << setw(10) << "Rank" << setw(10) << "Score" << endl;
    cout << setw(10) << 1 << setw(10) << 95 << endl;
    cout << setw(10) << 2 << setw(10) << 88 << endl;

    cout << "\nFormatting with setprecision:" << endl;
    cout << "Pi (default): " << pi << endl;
    cout << "Pi (fixed, 2): " << fixed << setprecision(2) << pi << endl;
    cout << "Pi (fixed, 4): " << fixed << setprecision(4) << pi << endl;

    return 0;
}
