#include <iostream>
#include <string>
using namespace std;

bool duplicates(string arr[], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (arr[i] == arr[j]) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    string arr1[] = {"cat", "dog", "mouse"};
    string arr2[] = {"cat", "dog", "mouse", "cat"};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    cout << "Array arr1 contains duplicates: " << (duplicates(arr1, size1) ? "true" : "false") << endl;
    cout << "Array arr2 contains duplicates: " << (duplicates(arr2, size2) ? "true" : "false") << endl;

    return 0;
}
