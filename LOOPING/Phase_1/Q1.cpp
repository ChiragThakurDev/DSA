// Print numbers from 1 to 10
#include<iostream>
using namespace std;

// Function to print numbers from 1 to n
void num(int n){
    
    // Check for invalid input (0 or negative numbers)
    if(n <= 0){
        cout << "Invalid input: " << n << endl;
        return; // Exit the function if input is invalid
    }

    // Loop to print numbers from 1 to n
    for(int i = 1; i <= n; i++){
        cout << i << endl; // Print each number on a new line
    }
}

int main(){
    num(10);    // Print numbers from 1 to 10
    num(100);   // Print numbers from 1 to 100
    num(1000);  // Print numbers from 1 to 1000
    num(-2);    // Invalid input case
    num(0);     // Invalid input case
    
    return 0;   // End of program
}