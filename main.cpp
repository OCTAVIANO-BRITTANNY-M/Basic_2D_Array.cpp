#include <iostream>
using namespace std;

void displayMatrix(int mat[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << mat[i][j] << "\t";
        }
        cout << endl;
    }
}

void addMatrices(int a[][3], int b[][3], int result[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

int main() {
    int A[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int B[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int sum[3][3];

    addMatrices(A, B, sum, 3, 3);

    cout << "Matrix A:" << endl;
    displayMatrix(A, 3, 3);

    cout << endl;

    cout << "Matrix B:" << endl;
    displayMatrix(B, 3, 3);

    cout << endl;

    cout << "Result (A + B):" << endl;
    displayMatrix(sum, 3, 3);

    return 0;
}
