#include <iostream>
using namespace std;

int main() {
    // Step 1: Create a 3x4 integer matrix
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Step 2: Display selected elements
    cout << "matrix[0][2] = " << matrix[0][2] << endl;
    cout << "matrix[2][0] = " << matrix[2][0] << endl;

    // Step 3: Display the complete matrix using nested loops
    int totalElements = 0;
    int sum = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matrix[i][j] << "\t";
            totalElements++;
            sum += matrix[i][j];
        }
        cout << endl;
    }

    // Step 4: Total elements and sum of all elements
    cout << "Total elements: " << totalElements << endl;
    cout << "Sum of all elements: " << sum << endl;

    return 0;
}
