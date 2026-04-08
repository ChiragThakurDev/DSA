// Take a 3-digit number and determine if the middle digit is the largest, smallest, or
// neither
#include<iostream>
using namespace std;

void digit(int num){

    if(num < 1000 || num > 9999){
        cout << "Invalid number: " << num << endl;
        return;
    }

    int a = num / 1000;
    int b = (num / 100) % 10;
    int c = (num/10) % 10;
    int d=  num %10;

    if(a==d){
        cout << "The first and last digits are equal " << num << endl;
    }
    else{
        cout << "The first and last digits are not equal " << num << endl;
    }
}

int main(){
    digit(3459);
    digit(9879);
    digit(3123);
    digit(6785);
    digit(8979);
    digit(9999);
    digit(450);   // test invalid
    return 0;
}