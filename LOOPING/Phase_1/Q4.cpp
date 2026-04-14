// Print numbers from n to 1
#include<iostream>
using namespace std;

void reversePrint(int n){
    if(n <= 0){
        cout << "Invalid Input" << endl;
        return;
    }

    for(int i = n; i >= 1; i--){
        cout << "Number: " << i << endl;
    }
}

int main(){
    reversePrint(1000);
    reversePrint(100);
    reversePrint(10);
    reversePrint(0);
    reversePrint(-234);
    return 0;
}