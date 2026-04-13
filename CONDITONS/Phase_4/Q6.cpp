// Take two numbers and check if both are positive and their sum is less than 100.
#include<iostream>
using namespace std;

void check(int a, int b){
    int sum = a + b;

    if(a <= 0 || b <= 0){
        cout << "One or both numbers are not positive: " << a << " and " << b << endl;
    }
    else if(sum < 100){
        cout << "Both numbers are positive and sum is less than 100: " << sum << endl;
    }
    else if(sum == 100){
        cout << "Both numbers are positive and sum is equal to 100: " << sum << endl;
    }
    else{
        cout << "Both numbers are positive but sum is greater than 100: " << sum << endl;
    }
}

int main(){
    check(10, 20);
    check(5, 15);
    check(7, 3);
    check(100, 200);
    check(1, 9);
    check(50, 50);
    check(8, 12);
    check(-4, -6);
    return 0;
}