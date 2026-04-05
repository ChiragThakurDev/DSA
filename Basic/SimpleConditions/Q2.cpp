// Check if a number is even or odd
#include<iostream>
using namespace std;

void check(int num){
    if(num%2==0){
        cout<<"The number is even: "<<num<<endl;
    }
    else{
        cout<<"The number is odd: "<<num<<endl;
    }
}
int main(){
    check(24);
    check(-2345);
    return 0;
}