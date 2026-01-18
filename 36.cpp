#include <iostream>
using namespace std;

int main() {
    int matrix1[3][3], matrix2[3][3];
    int row = 3, col = 3;

    cout << "Enter elements of first 3x3 matrix:" << endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter elements of second 3x3 matrix:" << endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> matrix2[i][j];
        }
    }
    //Product Of Matrix
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout<< matrix1[i][j] * matrix2[i][j];
        }
        cout<<endl;
    }

    return 0;
}
