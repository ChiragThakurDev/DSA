// Find sum of first n natural numbers
#include<iostream>
using namespace std;

void sumNatural(int n){
    if(n < 1){
        cout << "Invalid Input" << endl;
        return;
    }

    int total = 0;

    for(int i = 1; i <= n; i++){
        total += i;
    }

    cout << "Sum of " << n << " natural numbers: " << total << endl;
}

int main(){
    sumNatural(100);
    sumNatural(10);
    sumNatural(23456);
    sumNatural(0);
    sumNatural(-234567);
    return 0;
}