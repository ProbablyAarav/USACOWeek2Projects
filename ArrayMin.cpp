#include <iostream>
using namespace std;

int findMin(int list[], int size) {
    int m = list[0];
    for (int i = 0; i < size; i++) {
        if (list[i] < m) {
            m = list[i];
            //cout << m << " ";
        }
    }
    return m;
}
int main() {
    int list[] = {2, 4, 8, 1};
    int size = sizeof(list) / sizeof(list[0]);
    int min = findMin(list, size);
    cout << "Minumum value: " << min << endl;
    return 0;
}
