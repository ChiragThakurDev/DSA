//Take a 3-digit number and check if all digits are distinct.
#include<iostream>
using namespace std;
void digit(int num){
    int a=num/100;
    int b=(num/10)%10;
    int c=num%10;
    if(a!=b && b!=c && c!=a){
        cout<<"All digits are distinct: "<<num<<endl;
    }
    else{
        cout<<"Digits are not distinct: "<<num<<endl;
        }
}
int main(){
    digit(123456);
    digit(1231);
    digit(000);
    digit(657);
    digit(777);
    return 0;
}


//Distint digit are those number where 
//1.123 all numbers should be different is distinct
//2. 121 is not a distinct number because 1 is repeating

//logic
//1. we will take the number and extract the digits
//2. we will compare the digits and check if they are distinct or not
//3. if all digits are distinct we will print the message otherwise we will print the message that digits are not distinct

//code logic
// a = 123 / 100 = 1
// b = (123 / 10) % 10 = 12 % 10 = 2
// c = 123 % 10 = 3

