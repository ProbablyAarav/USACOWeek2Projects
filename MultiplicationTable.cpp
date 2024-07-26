#include <iostream>
using namespace std;

int** multiplicationTable(int size) {
    // Dynamically allocate a 2D array
    int** table = new int*[size];
    for (int i = 0; i < size; ++i) {
        table[i] = new int[size];
    }

    // Fill the array with multiplication values
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            table[i][j] = (i + 1) * (j + 1);
        }
    }

    return table;
}

void printTable(int** table, int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << table[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    int size = 5;
    int** table = multiplicationTable(size);

    // Print the multiplication table
    printTable(table, size);

    // Free allocated memory
    for (int i = 0; i < size; ++i) {
        delete[] table[i];
    }
    delete[] table;

    return 0;
}
