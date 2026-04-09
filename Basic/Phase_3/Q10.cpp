// Check whether a number is a perfect square (without using the square root function)
#include<iostream>
using namespace std;

void check(int num){
    if(num <= 0){
        cout << "Invalid Data: " << num << endl;
        return;
    }

    bool isPerfect = false;

    for(int i = 1; i * i <= num; i++){
        if(i * i == num){
            cout << "The number " << num << " is a perfect square" << endl;
            isPerfect = true;
            break;
        }
    }

    if(!isPerfect){
        cout << "The number " << num << " is not a perfect square" << endl;
    }
}

int main(){
    check(25);
    check(24);
    check(12);
    check(16);
    check(-98);
    check(0);
    check(64);
    return 0;
}