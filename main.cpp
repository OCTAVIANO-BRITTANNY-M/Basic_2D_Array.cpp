#include <iostream>
using namespace std;

void multiplyMatrices(int a[][3], int b[][2], int result[][2],
                      int rowsA, int colsA, int rowsB, int colsB) {
    if (colsA != rowsB) {
        cout << "Matrix multiplication cannot be performed." << endl;
        return;
    }

    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            result[i][j] = 0;

            for (int k = 0; k < colsA; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    cout << "Result:" << endl;

    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            cout << result[i][j] << "\t";
        }
        cout << endl;
    }
}

void multiplyIdentityCheck(int a[][2], int b[][2], int result[][2],
                           int rowsA, int colsA, int rowsB, int colsB) {
    if (colsA != rowsB) {
        cout << "Matrix multiplication cannot be performed." << endl;
        return;
    }

    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            result[i][j] = 0;

            for (int k = 0; k < colsA; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    cout << "Result:" << endl;

    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            cout << result[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    int A[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int B[3][2] = {
        {7, 8},
        {9, 10},
        {11, 12}
    };

    int result1[2][2];

    cout << "Test Case 1: Compatible Matrices (2 x 3) x (3 x 2)" << endl;
    multiplyMatrices(A, B, result1, 2, 3, 3, 2);

    cout << endl;

    int C[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int D[2][2] = {
        {7, 8},
        {9, 10}
    };

    int result2[2][2];

    cout << "Test Case 2: Incompatible Matrices (2 x 3) x (2 x 2)" << endl;
    multiplyMatrices(C, D, result2, 2, 3, 2, 2);

    cout << endl;

    int E[2][2] = {
        {1, 2},
        {3, 4}
    };

    int identity[2][2] = {
        {1, 0},
        {0, 1}
    };

    int result3[2][2];

    cout << "Test Case 3: Identity Matrix Sanity Check" << endl;
    multiplyIdentityCheck(E, identity, result3, 2, 2, 2, 2);

    return 0;
}
