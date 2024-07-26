#include <iostream>
using namespace std;

int findMode(int arr[], int size) {
    if (size == 0) return -1; // Handle empty array case

    int mode = arr[0];
    int maxCount = 0;

    for (int i = 0; i < size; ++i) {
        int count = 0;
        for (int j = 0; j < size; ++j) {
            if (arr[j] == arr[i]) {
                ++count;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            mode = arr[i];
        }
    }

    return mode;
}

int main() {
    int arr[] = {1, 2, 2, 3, 3, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int mode = findMode(arr, size);
    cout << "The mode is: " << mode << endl;
    return 0;
}
