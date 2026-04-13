//Take a number and priint "Fizz" if divisible by 3, "Buzz" if divisible by  5, and ""FizzBuzz" if divisible by both
#include<iostream>
using namespace std;
void check(int num){
    if(num==0){
        cout<<"Invalid Data: "<<num<<endl;
     }
     else if(num%3==0 && num%5==0){
        cout<<"FizzBuzz: "<<num<<endl;
    }
    else if(num%3==0){
        cout<<"Fizz: "<<num<<endl;
    }
    else if(num%5==0){
        cout<<"Buzz: "<<num<<endl;
    }
    
    else{
        cout<<"None is satifying: "<<num<<endl;
    }
}
int main(){
    check(25);
    check(12);
    check(-2);
    check(2);
    check(9);
    check(0);
    check(55);
    check(15);
    check(37);
    return 0;
}