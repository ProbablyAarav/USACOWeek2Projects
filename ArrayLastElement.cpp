#include <iostream>
using namespace std;
int main(){
    int LastElement[2] = {1, 2};
    int size=sizeof(LastElement)/sizeof(int);
    std::cout<<LastElement[size-1];
    return LastElement[size-1];
}