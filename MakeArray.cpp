#include <iostream>
using namespace std;
int main(){
    int len;
    cout<<"How many values are in your array? ";
    cin>>len;
    int arr[len]={};
    cout<<"[";
    for (int i=len; i>0; i--){
        //cout<<i<<" ";
        arr[i-1]=0;
        cout<<arr[i-1]<<", ";
    }
    cout<<"]\n";
    cout<<"array: "<<arr;
}