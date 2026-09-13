#include <iostream>
using namespace std;

int main() {
    int matrix[2][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10}
    };

    cout << "matrix[1][3] = " << matrix[1][3] << endl;

    int totalElements = 0;
    int sum = 0;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
            cout << matrix[i][j] << "\t";
            totalElements++;
            sum += matrix[i][j];
        }

        cout << endl;
    }

    cout << "Total elements: " << totalElements << endl;
    cout << "Sum of all elements: " << sum << endl;

    return 0;
}
