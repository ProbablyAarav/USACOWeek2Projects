#include <iostream>
#include <string>
using namespace std;

void swapFirstLast(string list[], int size) {
    // Check if the array has at least two elements
    if (size > 1) {
        // Swap the first and last elements
        string temp = list[0];
        list[0] = list[size - 1];
        list[size - 1] = temp;
    }
}

int main() {
    // Example 1: More than one element
    string list1[] = {"hello", "world"};
    int size1 = sizeof(list1) / sizeof(list1[0]);
    swapFirstLast(list1, size1);
    cout << "Swapped array 1: [";
    for (int i = 0; i < size1; i++) {
        cout << list1[i];
        if (i < size1 - 1) cout << ", ";
    }
    cout << "]" << endl;

    // Example 2: Single element
    string list2[] = {"hello"};
    int size2 = sizeof(list2) / sizeof(list2[0]);
    swapFirstLast(list2, size2);
    cout << "Swapped array 2: [";
    for (int i = 0; i < size2; i++) {
        cout << list2[i];
        if (i < size2 - 1) cout << ", ";
    }
    cout << "]" << endl;

    // Example 3: Empty array
    string list3[] = {};
    int size3 = sizeof(list3) / sizeof(list3[0]);
    swapFirstLast(list3, size3);
    cout << "Swapped array 3: [";
    for (int i = 0; i < size3; i++) {
        cout << list3[i];
        if (i < size3 - 1) cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}
