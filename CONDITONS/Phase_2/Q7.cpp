// Take two numbers and determine whether both are even, both are odd, or one is
// even and one is odd.
#include<iostream>
using namespace std;

void check(int a,int b){
    if(a%2==0 && b%2==0){
        cout<<"Both numbers are even "<<a<<", "<<b<<endl;
        }
    else if(a%2==1 && b%2==1){
        cout<<"Both numbers are odd "<<a<<", "<<b<<endl;
    }
    else if(a%2==0 && b%2==1){
        cout<<"First number is even "<<a<<" and the second number is odd "<<b<<endl;
    }
    else{
        cout<<"First number is odd "<<a<<" and the second number is even "<<b<<endl;
    }
}
int main(){
    check(12,12);
    check(5,7);
    check(6,9);
    check(7,4);
    return 0;
}