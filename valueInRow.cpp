#include <iostream>
using namespace std;

bool existsAsIndex(int** array, int numRows, int numCols, int row, int value) {
    // Check if the row index is within bounds
    if (row >= 0 && row < numRows) {
        // Check if the value exists as an index in the given row
        if (value >= 0 && value < numCols) {
            return true;
        }
    }
    return false;
}

int main() {
    // Define a 2D array with 3 rows and 5 columns
    int numRows = 3;
    int numCols = 5;
    int** array = new int*[numRows];
    for (int i = 0; i < numRows; ++i) {
        array[i] = new int[numCols];
        for (int j = 0; j < numCols; ++j) {
            array[i][j] = i * numCols + j;  // Just an example initialization
        }
    }

    // Test cases
    int row = 1;
    int value1 = 3; // Should return true
    int value2 = 5; // Should return false, as max index in row is 4

    cout << "Value " << value1 << " exists as an index in row " << row << ": " 
         << (existsAsIndex(array, numRows, numCols, row, value1) ? "true" : "false") << endl;
    cout << "Value " << value2 << " exists as an index in row " << row << ": " 
         << (existsAsIndex(array, numRows, numCols, row, value2) ? "true" : "false") << endl;

    // Free allocated memory
    for (int i = 0; i < numRows; ++i) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}
