#include <iostream>
using namespace std;

// Displays the matrix
// Input: matrix, number of rows, and columns
// Output: prints all values in the matrix
void displayMatrix(int mat[][4], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << mat[i][j] << "\t";
        }
        cout << endl;
    }
}

// Gets the total of all values in the matrix
// Input: matrix, number of rows, and columns
// Output: returns the total sum
int sumMatrix(int mat[][4], int rows, int cols) {
    int total = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            total += mat[i][j];
        }
    }

    return total;
}

// Gets the average of all values in the matrix
// Input: matrix, number of rows, and columns
// Output: returns the average
double averageMatrix(int mat[][4], int rows, int cols) {
    return (double)sumMatrix(mat, rows, cols) / (rows * cols);
}

// Finds the highest value in the matrix
// Input: matrix, number of rows, and columns
// Output: returns the highest value
int findMaximum(int mat[][4], int rows, int cols) {
    int maximum = mat[0][0];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (mat[i][j] > maximum) {
                maximum = mat[i][j];
            }
        }
    }

    return maximum;
}

// Finds the lowest value in the matrix
// Input: matrix, number of rows, and columns
// Output: returns the lowest value
int findMinimum(int mat[][4], int rows, int cols) {
    int minimum = mat[0][0];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (mat[i][j] < minimum) {
                minimum = mat[i][j];
            }
        }
    }

    return minimum;
}

// Counts the values that are above the given threshold
// Input: matrix, rows, columns, and threshold
// Output: returns the number of values above the threshold
int countAboveThreshold(int mat[][4], int rows, int cols, int threshold) {
    int count = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (mat[i][j] > threshold) {
                count++;
            }
        }
    }

    return count;
}

// Adds two matrices
// Input: two matrices, result matrix, rows, and columns
// Output: stores the sum in the result matrix
void addMatrices(int a[][4], int b[][4], int result[][4], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

// Subtracts the second matrix from the first matrix
// Input: two matrices, result matrix, rows, and columns
// Output: stores the difference in the result matrix
void subtractMatrices(int a[][4], int b[][4], int result[][4], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = a[i][j] - b[i][j];
        }
    }
}

// Multiplies two matrices if their sizes are compatible
// Input: two matrices, result matrix, and their row and column sizes
// Output: returns true if multiplication works, false if not
bool multiplyMatrices(int a[][4], int b[][4], int result[][4],
                      int rowsA, int colsA, int rowsB, int colsB) {

    if (colsA != rowsB) {
        cout << "Matrix multiplication cannot be performed." << endl;
        return false;
    }

    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            result[i][j] = 0;

            for (int k = 0; k < colsA; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    return true;
}

int main() {

    int image[4][4] = {
        {10, 50, 100, 150},
        {20, 60, 110, 160},
        {30, 70, 120, 170},
        {40, 80, 130, 180}
    };

    cout << "PART C: IMAGE GRID PROCESSOR" << endl;
    cout << "Image Grid:" << endl;
    displayMatrix(image, 4, 4);
    cout << endl;

    cout << "Sum: " << sumMatrix(image, 4, 4) << endl;
    cout << "Average: " << averageMatrix(image, 4, 4) << endl;
    cout << "Maximum: " << findMaximum(image, 4, 4) << endl;
    cout << "Minimum: " << findMinimum(image, 4, 4) << endl;
    cout << "Count Above 128: "
         << countAboveThreshold(image, 4, 4, 128) << endl;

    cout << "\nPART D: MATRIX ADDITION" << endl;

    int matrixA[3][4] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int matrixB[3][4] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int additionResult[3][4] = {};

    addMatrices(matrixA, matrixB, additionResult, 3, 3);

    cout << "Matrix A:" << endl;
    displayMatrix(matrixA, 3, 3);

    cout << "\nMatrix B:" << endl;
    displayMatrix(matrixB, 3, 3);

    cout << "\nA + B:" << endl;
    displayMatrix(additionResult, 3, 3);

    cout << "\nPART E: MATRIX SUBTRACTION" << endl;

    int subtractionResult[3][4] = {};

    subtractMatrices(matrixA, matrixB, subtractionResult, 3, 3);

    cout << "A - B:" << endl;
    displayMatrix(subtractionResult, 3, 3);

    subtractMatrices(matrixB, matrixA, subtractionResult, 3, 3);

    cout << "\nB - A:" << endl;
    displayMatrix(subtractionResult, 3, 3);

    cout << "\nPART F: MATRIX MULTIPLICATION" << endl;

    int multiplicationA[2][4] = {
        {1, 2},
        {3, 4}
    };

    int multiplicationB[2][4] = {
        {5, 6},
        {7, 8}
    };

    int multiplicationResult[2][4] = {};

    cout << "Matrix A:" << endl;
    displayMatrix(multiplicationA, 2, 2);

    cout << "\nMatrix B:" << endl;
    displayMatrix(multiplicationB, 2, 2);

    multiplyMatrices(multiplicationA, multiplicationB,
                     multiplicationResult, 2, 2, 2, 2);

    cout << "\nResult (A x B):" << endl;
    displayMatrix(multiplicationResult, 2, 2);

    cout << "\nPART G: DIMENSION VALIDATION" << endl;

    int matrixC[2][4] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int matrixD[3][4] = {
        {7, 8},
        {9, 10},
        {11, 12}
    };

    int validResult[2][4] = {};

    cout << "2x3 x 3x2:" << endl;

    if (multiplyMatrices(matrixC, matrixD, validResult, 2, 3, 3, 2)) {
        displayMatrix(validResult, 2, 2);
    }

    int incompatibleMatrix[2][4] = {
        {1, 2},
        {3, 4}
    };

    int invalidResult[2][4] = {};

    cout << "\n2x3 x 2x2:" << endl;

    multiplyMatrices(matrixC, incompatibleMatrix,
                     invalidResult, 2, 3, 2, 2);

    cout << "\n3x4 IMAGE GRID TEST" << endl;

    int image3x4[3][4] = {
        {10, 20, 30, 40},
        {50, 60, 70, 80},
        {90, 100, 110, 120}
    };

    displayMatrix(image3x4, 3, 4);

    cout << "Sum: " << sumMatrix(image3x4, 3, 4) << endl;
    cout << "Average: " << averageMatrix(image3x4, 3, 4) << endl;

    cout << "\nZERO VALUE TEST" << endl;

    int zeroMatrix[2][4] = {
        {0, 2},
        {3, 0}
    };

    int identityMatrix[2][4] = {
        {1, 0},
        {0, 1}
    };

    int zeroResult[2][4] = {};

    displayMatrix(zeroMatrix, 2, 2);

    cout << "Sum: " << sumMatrix(zeroMatrix, 2, 2) << endl;
    cout << "Average: " << averageMatrix(zeroMatrix, 2, 2) << endl;
    cout << "Maximum: " << findMaximum(zeroMatrix, 2, 2) << endl;
    cout << "Minimum: " << findMinimum(zeroMatrix, 2, 2) << endl;

    multiplyMatrices(zeroMatrix, identityMatrix,
                     zeroResult, 2, 2, 2, 2);

    cout << "\nZero Matrix x Identity Matrix:" << endl;
    displayMatrix(zeroResult, 2, 2);

    return 0;
}

