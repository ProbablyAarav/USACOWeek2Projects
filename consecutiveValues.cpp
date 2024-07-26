#include <iostream>
using namespace std;

bool consecutive(int** array, int rows, int cols) {
    // Check for consecutive values within rows
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols - 1; ++j) {
            if (array[i][j] == array[i][j + 1]) {
                return true;
            }
        }
    }

    // Check for consecutive values between rows
    for (int i = 0; i < rows - 1; ++i) {
        if (array[i][cols - 1] == array[i + 1][0]) {
            return true;
        }
    }

    return false;
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
    // Define the size of the array
    int rows = 3;
    int cols = 3;

    // Create and initialize the 2D array
    int** array = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        array[i] = new int[cols];
    }

    // Initialize with example values
    array[0][0] = 1; array[0][1] = 2; array[0][2] = 3;
    array[1][0] = 3; array[1][1] = 4; array[1][2] = 5;
    array[2][0] = 6; array[2][1] = 7; array[2][2] = 8;

    // Print and check if there are consecutive values
    cout << "2D Array:" << endl;
    print2DArray(array, rows, cols);
    cout << "Contains consecutive values: " << (consecutive(array, rows, cols) ? "true" : "false") << endl;

    // Free allocated memory
    free2DArray(array, rows);

    return 0;
}
