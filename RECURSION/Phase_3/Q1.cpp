//Print a line of n stars recursively
#include<iostream>
using namespace std;
void check(int n){
    if(n<1) return;

check(n-1);
cout<<"*"<<" ";
}
int main(){
    check(5);
    return 0;
}