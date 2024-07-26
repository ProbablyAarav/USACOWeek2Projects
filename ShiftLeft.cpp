#include <iostream>
using namespace std;
int last;
int shiftLeft(int list[], int size){
    last=list[0];
    for (int i=1; i<=size; i++){
        list[i-1]=list[i];
    }
    list[size]=last;
    return 0;
}
int main(){
    int size;
    cout<<"How many numbers are in your array? ";
    cin>>size;
    int list1[size]={};
    int x;
    for (int i=0; i<=size-1; i++){
        cout<<"Enter the element for your array at index " << i << "-->  ";
        cin>>x;
        list1[i]=x;
    }
    shiftLeft(list1, size);
    cout<<"Your new array is: "<<"[";
    for (int j=0; j<=size-2; j++){
        cout<<list1[j]<<", ";
    }
    cout<<last<<"]\n";
}