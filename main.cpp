
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

int sumMatrix(int mat[][4], int rows, int cols) {
    int total = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            total += mat[i][j];
        }
    }
    return total;
}

double averageMatrix(int mat[][4], int rows, int cols) {
    return (double)sumMatrix(mat, rows, cols) / (rows * cols);
}

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

int main() {
    int image[4][4] = {
        {10, 50, 100, 150},
        {20, 60, 110, 160},
        {30, 70, 120, 170},
        {40, 80, 130, 180}
    };

    int rows = 4;
    int cols = 4;
    int threshold = 128;

    cout << "Image Grid:" << endl;
    displayMatrix(image, rows, cols);

    cout << endl;
    cout << "Sum: " << sumMatrix(image, rows, cols) << endl;
    cout << "Average: " << averageMatrix(image, rows, cols) << endl;
    cout << "Maximum: " << findMaximum(image, rows, cols) << endl;
    cout << "Minimum: " << findMinimum(image, rows, cols) << endl;
    cout << "Count Above " << threshold << ": "
         << countAboveThreshold(image, rows, cols, threshold) << endl;

    return 0;
}


