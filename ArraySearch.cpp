#include <iostream>
using namespace std;
int search(int arr[], int target, int size){
    cout<<"Postion of "<<target<<" is at index ";
    for (int i=0; i<size; i++){
        if (arr[i]==target){
            cout<<i<<".";
            return 0;
        }
    }
    cout<<-1<<".";
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
    cout<<"Your array is: "<<"[";
    for (int j=0; j<=size-1; j++){
        cout<<list1[j]<<", ";
    }
    cout<<"]\n";
    int target1;
    cout<<"What number are you looking for? ";
    cin>>target1;
    search(list1, target1, size);
}