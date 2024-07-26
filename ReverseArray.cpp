#include <iostream>
using namespace std;

int* reverse(int list[], int size) {
    // Create a new array to hold the reversed elements
    int* reversed = new int[size];
    
    // Fill the reversed array with elements from the original array in reverse order
    for (int i = 0; i < size; i++) {
        reversed[i] = list[size - 1 - i];
    }
    
    return reversed;
}

int main() {
    int list[] = {1, 2, 3};
    int size = sizeof(list) / sizeof(list[0]);

    // Call the reverse function
    int* reversedList = reverse(list, size);

    // Print the reversed array
    cout << "Reversed array: [";
    for (int i = 0; i < size; i++) {
        cout << reversedList[i];
        if (i < size - 1) cout << ", ";
    }
    cout << "]" << endl;

    // Free the allocated memory
    delete[] reversedList;

    return 0;
}
