#include <iostream>
using namespace std;

void reverse2DArray(int** array, int rows, int cols) {
    int totalElements = rows * cols;
    int* flatArray = new int[totalElements];
    
    // Flatten the 2D array into a 1D array
    int index = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            flatArray[index++] = array[i][j];
        }
    }

    // Reverse the 1D array
    int start = 0;
    int end = totalElements - 1;
    while (start < end) {
        int temp = flatArray[start];
        flatArray[start] = flatArray[end];
        flatArray[end] = temp;
        ++start;
        --end;
    }

    // Assign the reversed values back to the 2D array
    index = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            array[i][j] = flatArray[index++];
        }
    }

    delete[] flatArray;
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

    // Reverse the array
    reverse2DArray(array, rows, cols);

    // Print the reversed array
    cout << "\nReversed array:" << endl;
    print2DArray(array, rows, cols);

    // Free allocated memory
    free2DArray(array, rows);

    return 0;
}
