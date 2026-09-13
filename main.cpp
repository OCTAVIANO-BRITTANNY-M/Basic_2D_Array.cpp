#include <iostream>
using namespace std;

void multiplyMatrices(int a[][2], int b[][2], int result[][2],
                      int rowsA, int colsA, int colsB) {
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            result[i][j] = 0;

            for (int k = 0; k < colsA; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void displayMatrix(int mat[][2], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << mat[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    int A[2][2] = {
        {1, 2},
        {3, 4}
    };

    int B[2][2] = {
        {5, 6},
        {7, 8}
    };

    int result[2][2];

    multiplyMatrices(A, B, result, 2, 2, 2);

    cout << "Matrix A:" << endl;
    displayMatrix(A, 2, 2);

    cout << endl;

    cout << "Matrix B:" << endl;
    displayMatrix(B, 2, 2);

    cout << endl;

    cout << "Result (A x B):" << endl;
    displayMatrix(result, 2, 2);

    return 0;
}
