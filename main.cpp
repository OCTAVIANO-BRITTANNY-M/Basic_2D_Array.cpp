#include <iostream>
using namespace std;

void displayMatrix(int mat[][4], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << mat[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    int matrix[2][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8}
    };

    displayMatrix(matrix, 2, 4);

    return 0;
}
