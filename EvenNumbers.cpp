#include <iostream>
using namespace std;

int countEven(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {2, 4, 6, 8};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    cout << "Number of even numbers in arr1: " << countEven(arr1, size1) << endl;
    cout << "Number of even numbers in arr2: " << countEven(arr2, size2) << endl;

    return 0;
}
