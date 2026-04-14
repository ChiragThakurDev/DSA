// Display even numbers from 1 to n
#include<iostream>
using namespace std;

void showEven(int n){
    // Check for invalid value
    if(n <= 0){
        cout << "Invalid Input" << endl;
        return;
    }

    // Loop through numbers
    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            cout << "Even number: " << i << endl;
        }
    }
}

int main(){
    showEven(100);
    showEven(1000);
    showEven(0);
    showEven(-2345);
    return 0;
}