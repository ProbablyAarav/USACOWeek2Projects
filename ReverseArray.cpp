#include <iostream>
using namespace std;
void repeat(int list[], int size){
    for (int i=size-1; i>=0; i--){
        cout<<list[i]<<" ";
    }
}
int main(){
    int list1[] = {1, 2, 5, 2};
    int size1 = sizeof(list1) / sizeof(list1[0]);
    repeat(list1, size1);
}