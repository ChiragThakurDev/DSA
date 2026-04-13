//Take an integer(1-9999) and check if the sum of digits is greater than the product of its digits.
#include<iostream>
using namespace std;

void check(int num){

    if(num < 1 || num > 9999){
        cout<<"Invalid Input"<<endl;
        return;   // IMPORTANT
    }

    int a = num / 1000;
    int b = (num / 100) % 10;
    int c = (num / 10) % 10;
    int d = num % 10;

    int sum = a + b + c + d;
    int product = a * b * c * d;

    if(sum > product){
        cout<<"Sum is greater than product: sum = "<<sum<<" product = "<<product<<endl;
    }
    else{
        cout<<"Sum is NOT greater than product: sum = "<<sum<<" product = "<<product<<endl;
    }
}

int main(){
    check(23445);
    check(-234);
    check(2346);
    check(7654);
    check(1111);
    check(7467);
    check(2222);
    return 0;
}