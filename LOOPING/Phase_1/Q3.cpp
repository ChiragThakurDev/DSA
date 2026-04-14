// Display odd numbers from 1 to n
#include<iostream>
using namespace std;

void showOdd(int n){
    if(n <= 0){
        cout << "Invalid Input" << endl;
        return;
    }

    for(int i = 1; i <= n; i++){
        if(i % 2 != 0){
            cout << "Odd number: " << i << endl;
        }
    }
}

int main(){
    showOdd(100);
    showOdd(1000);
    showOdd(-234567);
    return 0;
}