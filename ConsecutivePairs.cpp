#include <iostream>
using namespace std;

bool pairs(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        if (arr[i] == arr[i + 1]) {
            return true;
        }
    }
    return false;
}

int main() {
    int arr1[] = {1, 2, 3, 3, 4};
    int arr2[] = {6, 5, 10, 4, 5};
    int arr3[] = {2, 2, 2, 2, 2};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int size3 = sizeof(arr3) / sizeof(arr3[0]);

    cout << "Array arr1 contains consecutive pairs: " << (pairs(arr1, size1) ? "true" : "false") << endl;
    cout << "Array arr2 contains consecutive pairs: " << (pairs(arr2, size2) ? "true" : "false") << endl;
    cout << "Array arr3 contains consecutive pairs: " << (pairs(arr3, size3) ? "true" : "false") << endl;

    return 0;
}
