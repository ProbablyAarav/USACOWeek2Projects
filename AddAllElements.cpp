#include <iostream>
using namespace std;
int main(){
    double len[3]={1.0,2.5,3.5};
    double sum=0.0;
    for (int i=0; i<3; i++){
        sum+=len[i+1];
    }
    std::cout<<sum;
    return sum;
}