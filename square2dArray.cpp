#include <iostream>
using namespace std;

bool isSquare(int arr[][3], int rows, int cols) {
    return rows == cols;
}

int main() {
    // Define two 2D arrays for testing
    int squareArray[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int nonSquareArray[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // Determine the number of rows and columns
    int rows1 = sizeof(squareArray) / sizeof(squareArray[0]);
    int cols1 = sizeof(squareArray[0]) / sizeof(squareArray[0][0]);

    int rows2 = sizeof(nonSquareArray) / sizeof(nonSquareArray[0]);
    int cols2 = sizeof(nonSquareArray[0]) / sizeof(nonSquareArray[0][0]);

    // Check if the arrays are square
    cout << "squareArray is square: " << (isSquare(squareArray, rows1, cols1) ? "true" : "false") << endl;
    cout << "nonSquareArray is square: " << (isSquare(nonSquareArray, rows2, cols2) ? "true" : "false") << endl;

    return 0;
}
