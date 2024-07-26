#include <iostream>
using namespace std;
int main(){
    double arr[3]={1.0,2.5,3.2};
    double newarr[3]={1.0,2.5,3.2};
    double mult;
    cout<<"Multiplier? ";
    cin>>mult;
    for (int i=0; i<3; i++){
        newarr[i]*=mult;
        cout<<newarr[i]<<" ";
    }
}