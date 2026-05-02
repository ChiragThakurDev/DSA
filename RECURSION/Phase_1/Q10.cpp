//Find sum of digits of a number recursively
#include<iostream>
using namespace std;

int check(int n){
    if(n==0) return 0;
    return check(n/10)+(n%10);
}

int main(){
   cout<<check(126)<<" ";
   cout<<endl;
   cout<<check(123456765)<<" ";
   cout<<endl;
    return 0;
}