// Calculate sum of even numbers up to n
#include<iostream>
using namespace std;

void sumEven(int n){
    if(n < 1){
        cout << "Invalid Input" << endl;
        return;
    }

    int total = 0;

    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            total += i;
        }
    }

    cout << "Sum of EVEN numbers till " << n << " is: " << total << endl;
}

int main(){
    sumEven(-2345);
    sumEven(45);
    sumEven(0);
    sumEven(100);
    sumEven(1000);
    return 0;
}