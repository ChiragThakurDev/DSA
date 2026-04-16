//Check if a number is palindrome or not
#include<iostream>
#include<cmath>
using namespace std;

void check(int num){
    int nonReverse = num;
    int reverse = 0;

    if(num < 0){
        num = abs(num);
        nonReverse = abs(nonReverse);
    }

    while(num){
        reverse = reverse * 10 + num % 10;
        num = num / 10;
    }

    cout << "Reverse: " << reverse << endl;

    if(nonReverse == reverse){
        cout << "The number is palindrome" << endl;
    }
    else{
        cout << "The number is not a palindrome" << endl;
    }
}

int main(){
    check(45678);
    check(11111);
    check(98789);
    check(-234562);
    check(0);
    check(1);
    return 0;
}