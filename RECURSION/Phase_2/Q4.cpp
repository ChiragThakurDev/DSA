//Find product of digits of a number recursively.
#include<iostream>
using namespace std;
int prod(int n){
    if(n<10) return n;

    return (n%10)*prod(n/10);
}
int main(){

   cout<<prod(345)<<endl;
   cout<<prod(2)<<endl;
    cout<<prod(2346)<<endl;
    return 0;
}
/// logic