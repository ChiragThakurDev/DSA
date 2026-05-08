//Find the binary representation of a given number using recursion.
#include<iostream>
using namespace std;

void check(int n){
    if(n==0){
        return;
    }
    check(n/2);
    cout<<n%2<<" ";

}
int main(){
    cout<<"Enter a number: ";
    int n;
    cin>>n;
    check(n);
    // check(10);
    // cout<<endl;
    // check(5);
    // cout<<endl;
    // check(15);
    // cout<<endl;
    return 0;

}

//logic 
// first if the number is 0 then we will return
// then we will call the function recursively with n/2
// then we will print the remainder of n%2 which will give us the binary representation of the number
