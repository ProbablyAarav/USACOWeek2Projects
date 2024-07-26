#include <iostream>
#include <string>
using namespace std;

bool allCats(string arr[], int size) {
    for (int i = 0; i < size; ++i) {
        if (arr[i].find("cat") == string::npos) {
            return false;
        }
    }
    return true;
}

int main() {
    string arr1[] = {"big cat", "small cat", "cat", "catamaran"};
    string arr2[] = {"big cat", "small cat", "dog"};
    
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    cout << "All values in arr1 contain 'cat': " << (allCats(arr1, size1) ? "true" : "false") << endl;
    cout << "All values in arr2 contain 'cat': " << (allCats(arr2, size2) ? "true" : "false") << endl;

    return 0;
}
