#include <iostream>
using namespace std;

int** split(int** array, int rows, int cols, int endRow, int endCol) {
    // Ensure that endRow and endCol do not exceed the bounds of the original array
    if (endRow > rows) endRow = rows;
    if (endCol > cols) endCol = cols;

    // Create a new 2D array with the specified dimensions
    int** newArray = new int*[endRow];
    for (int i = 0; i < endRow; ++i) {
        newArray[i] = new int[endCol];
        for (int j = 0; j < endCol; ++j) {
            newArray[i][j] = array[i][j];
        }
    }

    return newArray;
}

void print2DArray(int** array, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }
}

void free2DArray(int** array, int rows) {
    for (int i = 0; i < rows; ++i) {
        delete[] array[i];
    }
    delete[] array;
}

int main() {
    // Define a 2D array with 3 rows and 3 columns
    int rows = 3;
    int cols = 3;
    int** array = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        array[i] = new int[cols];
        for (int j = 0; j < cols; ++j) {
            array[i][j] = i * cols + j + 1;  // Initialize with example values
        }
    }

    // Print the original array
    cout << "Original array:" << endl;
    print2DArray(array, rows, cols);

    // Split the array at row 1 and column 1
    int endRow = 2;
    int endCol = 2;
    int** subArray = split(array, rows, cols, endRow, endCol);

    // Print the sub-array
    cout << "\nSub-array:" << endl;
    print2DArray(subArray, endRow, endCol);

    // Free allocated memory
    free2DArray(array, rows);
    free2DArray(subArray, endRow);

    return 0;
}
