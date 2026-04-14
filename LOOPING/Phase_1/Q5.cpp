// Print multiplication table of a number
#include<iostream>
using namespace std;

void printTable(int n){
    for(int i = 1; i <= 10; i++){
        cout << n << " * " << i << " = " << n * i << endl;
    }
    cout << endl; // spacing
}

int main(){
    printTable(5);
    printTable(0);
    printTable(-2);
    printTable(23456);
    printTable(232);
    printTable(32);
    return 0;
}