#include <iostream>
using namespace std;
void repeat(string list[], int size){
    for(int j=0; j<2; j++){
        for (int i=0; i<=size-1; i++){
            cout<<list[i]<<" ";
        }
    }
}
int main(){
    string list1[] = {"Hello", "world", "Aarav", "Yadav"};
    int size1 = sizeof(list1) / sizeof(list1[0]);
    repeat(list1, size1);
}