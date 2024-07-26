#include <iostream>
using namespace std;

int sum2DArray(int arr[][3], int rows, int cols) {
    int sum = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            sum += arr[i][j];
        }
    }
    return sum;
}

int main() {
    // Define a 2D array with 3 rows and 3 columns
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int rows = 3;
    int cols = 3;

    int totalSum = sum2DArray(arr, rows, cols);
    cout << "The sum of all values in the 2D array is: " << totalSum << endl;

    return 0;
}
