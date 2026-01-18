#include <iostream>
using namespace std;

int main() {
    int matrix1[3][3], matrix2[3][3];
    int r = 3, c = 3;

    cout << "Enter elements of first 3x3 matrix:" << endl;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter elements of second 3x3 matrix:" << endl;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> matrix2[i][j];
        }
    }
    //Addition Of Matrix
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cout<< matrix1[i][j] + matrix2[i][j];
        }
        cout<<endl;
    }

    return 0;
}
