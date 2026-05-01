//Calculate power of a number (xⁿ) using recursion.
#include<iostream>
using namespace std;
long long check(int x,int n){
    if(n==0)return 1;
    if(n%2==0){
        long long temp=check(x,n/2);
        return temp*temp;
    }
    else{
        return x*check(x,n-1);
    }
}
int main(){
    cout<<check(2,10);
    cout<<endl;
    cout<<check(3,5);
    cout<<endl;
    return 0;
}