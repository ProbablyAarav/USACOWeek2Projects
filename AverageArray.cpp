#include <iostream>
using namespace std;
double findAvg(double list[], int size) {
    double m = 0;
    for (int i = 0; i < size; i++) {
        m += list[i];
    }
    return m / size;
}
int main() {
    double list[] = {2, 4, 8, 1};
    int size = sizeof(list) / sizeof(list[0]);
    double avg = findAvg(list, size);
    cout << "Average value: " << avg << endl;
    return 0;
}
