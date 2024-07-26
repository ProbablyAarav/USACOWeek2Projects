#include <iostream>
using namespace std;

int** invert2DArray(int** array, int rows, int cols) {
    // Create a new 2D array with dimensions inverted
    int** invertedArray = new int*[cols];
    for (int i = 0; i < cols; ++i) {
        invertedArray[i] = new int[rows];
    }

    // Fill the new array with inverted values
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            invertedArray[j][i] = array[i][j];
        }
    }

    return invertedArray;
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
            array[i][j] = i + 1;  // Initialize with example values
        }
    }

    // Print the original array
    cout << "Original array:" << endl;
    print2DArray(array, rows, cols);

    // Invert the array
    int** invertedArray = invert2DArray(array, rows, cols);

    // Print the inverted array
    cout << "\nInverted array:" << endl;
    print2DArray(invertedArray, cols, rows);

    // Free allocated memory
    free2DArray(array, rows);
    free2DArray(invertedArray, cols);

    return 0;
}
