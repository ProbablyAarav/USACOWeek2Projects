#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int MiddleElement[5] = {1, 2, 7, 4, 5};
    int size=sizeof(MiddleElement)/sizeof(int);
    double tempMiddle=size/2;
    int middle=(int)round(tempMiddle);
    std::cout<<MiddleElement[middle];
    return MiddleElement[middle];
}