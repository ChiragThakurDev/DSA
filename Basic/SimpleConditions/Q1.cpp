// Q1. Take a number and print whether it’s positive, negative, or zero

#include<iostream>
using namespace std;

void checkOut(int num){
    if(num==0){
        cout<<"Number is Zero: "<<num<<endl;
    }
    else if(num>0){
        cout<<"Number is Positive: "<<num<<endl;
    }
    else{
        cout<<"Number is Negative: "<<num<<endl;
    }
}
int main(){
    checkOut(0);
    checkOut(876);
    checkOut(-234);
     checkOut(45);
    checkOut(-67);
    checkOut(100);
    checkOut(-1);
    checkOut(999);
    checkOut(-500);
    checkOut(10);
    return 0;
}

