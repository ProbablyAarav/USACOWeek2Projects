#include <iostream>
#include <unordered_set>
using namespace std;

bool isMagicSquare(int** square, int size) {
    if (size <= 0) return false;

    // Compute the target sum (sum of the first row)
    int targetSum = 0;
    for (int j = 0; j < size; ++j) {
        targetSum += square[0][j];
    }

    // Check sums of all rows
    for (int i = 0; i < size; ++i) {
        int rowSum = 0;
        for (int j = 0; j < size; ++j) {
            rowSum += square[i][j];
        }
        if (rowSum != targetSum) return false;
    }

    // Check sums of all columns
    for (int j = 0; j < size; ++j) {
        int colSum = 0;
        for (int i = 0; i < size; ++i) {
            colSum += square[i][j];
        }
        if (colSum != targetSum) return false;
    }

    // Check sum of main diagonal
    int diag1Sum = 0;
    for (int i = 0; i < size; ++i) {
        diag1Sum += square[i][i];
    }
    if (diag1Sum != targetSum) return false;

    // Check sum of anti-diagonal
    int diag2Sum = 0;
    for (int i = 0; i < size; ++i) {
        diag2Sum += square[i][size - i - 1];
    }
    if (diag2Sum != targetSum) return false;

    // Check for distinct positive integers
    unordered_set<int> uniqueNumbers;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (square[i][j] <= 0 || !uniqueNumbers.insert(square[i][j]).second) {
                return false;
            }
        }
    }

    return true;
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
    // Define a magic square
    int size = 3;
    int** magicSquare = new int*[size];
    for (int i = 0; i < size; ++i) {
        magicSquare[i] = new int[size];
    }

    // Initialize with example values
    magicSquare[0][0] = 7; magicSquare[0][1] = 2; magicSquare[0][2] = 3;
    magicSquare[1][0] = 0; magicSquare[1][1] = 4; magicSquare[1][2] = 8;
    magicSquare[2][0] = 5; magicSquare[2][1] = 6; magicSquare[2][2] = 1;

    // Print and check if the square is magical
    cout << "Magic Square:" << endl;
    print2DArray(magicSquare, size, size);
    cout << "Is magic square: " << (isMagicSquare(magicSquare, size) ? "true" : "false") << endl;

    // Free allocated memory
    free2DArray(magicSquare, size);

    return 0;
}
