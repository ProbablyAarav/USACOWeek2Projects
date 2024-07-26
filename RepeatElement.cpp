#include <iostream>
using namespace std;
void repeat(string list[], int iters, int size){
    for(int j=0; j<size; j++){
        for (int i=0; i<=iters-1; i++){
            cout<<list[j]<<" ";
        }
    }
}
int main(){
    string list1[] = {"Hello", "world", "Aarav", "Yadav"};
    int size1 = sizeof(list1) / sizeof(list1[0]);
    int iters1;
    cout<<"How many iterations? ";
    cin>>iters1;
    repeat(list1, iters1, size1);
}