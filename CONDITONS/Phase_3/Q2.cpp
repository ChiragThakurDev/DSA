// Take a 3-digit number and determine if the middle digit is the largest, smallest, or
// neither
#include<iostream>
using namespace std;

void digit(int num){

    if(num < 100 || num > 999){
        cout << "Invalid number: " << num << endl;
        return;
    }

    int a = num / 100;
    int b = (num / 10) % 10;
    int c = num % 10;

    if(b > a && b > c){
        cout << "The middle no. is largest: " << num << endl;
    }
    else if(b < a && b < c){
        cout << "The middle no. is smallest: " << num << endl;
    }
    else{
        cout << "The middle is neither largest nor smallest: " << num << endl;
    }
}

int main(){
    digit(345);
    digit(987);
    digit(312);
    digit(678);
    digit(897);
    digit(999);
    digit(45);   // test invalid
    return 0;
}