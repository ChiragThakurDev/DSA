// Calculate sum of odd numbers up to n
#include<iostream>
using namespace std;

void sumOdd(int n){
    if(n < 1){
        cout << "Invalid Input" << endl;
        return;
    }

    int total = 0;

    for(int i = 1; i <= n; i++){
        if(i % 2 != 0){
            total += i;
        }
    }

    cout << "Sum of ODD numbers till " << n << " is: " << total << endl;
}

int main(){
    sumOdd(-2345);
    sumOdd(45);
    sumOdd(0);
    sumOdd(100);
    sumOdd(1000);
    return 0;
}