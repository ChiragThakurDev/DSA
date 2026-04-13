// Check if a number is a multiple of 7 or ends with 7.
#include<iostream>
using namespace std;
void check(int num){
    if(num%7==0 || num%10==7){
        cout<<"The value is true: "<<num<<endl;
    }
    else{
        cout<<"The value is false: "<<num<<endl;
    }
}
int main(){
    check(789);
    check(777);
    check(49);
    check(0);
    check(23);
    check(-7);
    return 0;
}