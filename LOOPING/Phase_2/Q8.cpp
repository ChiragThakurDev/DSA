//Check if a number is prime or not
#include<iostream>
using namespace std;

void check(int n){
    if(n <= 1){
        cout << "The number " << n << " is NOT a Prime Number" << endl;
        return;
    }

    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            cout << "The number " << n << " is NOT a Prime Number" << endl;
            return;
        }
    }

    cout << "The number " << n << " is a Prime Number" << endl;
}

int main(){
    check(2);
    check(4);
    check(1);
    check(57);
    check(3);
    return 0;
}