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

void subtractMatrices(int a[][3], int b[][3], int result[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = a[i][j] - b[i][j];
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

    int differenceAB[3][3];
    int differenceBA[3][3];

    subtractMatrices(A, B, differenceAB, 3, 3);
    subtractMatrices(B, A, differenceBA, 3, 3);

    cout << "A - B:" << endl;
    displayMatrix(differenceAB, 3, 3);

    cout << endl;

    cout << "B - A:" << endl;
    displayMatrix(differenceBA, 3, 3);

    return 0;
}

