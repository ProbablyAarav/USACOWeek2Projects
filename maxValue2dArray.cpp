#include <iostream>
using namespace std;

int findMaxIn2DArray(int** array, int numRows, int numCols) {
    int maxVal = array[0][0]; // Initialize with the first element

    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < numCols; ++j) {
            if (array[i][j] > maxVal) {
                maxVal = array[i][j];
            }
        }
    }

    return maxVal;
}

int main() {
    // Define a 2D array with 3 rows and 3 columns
    int numRows = 3;
    int numCols = 3;
    int** array = new int*[numRows];
    for (int i = 0; i < numRows; ++i) {
        array[i] = new int[numCols];
        for (int j = 0; j < numCols; ++j) {
            array[i][j] = i * numCols + j + 1;  // Initialize with example values
        }
    }

    // Find the maximum value in the 2D array
    int maxVal = findMaxIn2DArray(array, numRows, numCols);
    cout << "The maximum value in the 2D array is: " << maxVal << endl;

    // Free allocated memory
    for (int i = 0; i < numRows; ++i) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}
