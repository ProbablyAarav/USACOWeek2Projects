#include <iostream>
#include <string>

using namespace std;

string** createEmptyStringArray(int rows, int cols) {
    // Dynamically allocate a 2D array of strings
    string** array = new string*[rows];
    for (int i = 0; i < rows; ++i) {
        array[i] = new string[cols];
        for (int j = 0; j < cols; ++j) {
            array[i][j] = "";  // Initialize each element with an empty string
        }
    }
    return array;
}

void printStringArray(string** array, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "\"" << array[i][j] << "\"" << "\t";
        }
        cout << endl;
    }
}

void freeStringArray(string** array, int rows) {
    for (int i = 0; i < rows; ++i) {
        delete[] array[i];
    }
    delete[] array;
}

int main() {
    int rows = 3;
    int cols = 4;

    // Create and print the 2D array
    string** array = createEmptyStringArray(rows, cols);
    printStringArray(array, rows, cols);

    // Free allocated memory
    freeStringArray(array, rows);

    return 0;
}
