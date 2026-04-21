//Print the LCM of the two numbers
#include<iostream>
#include<algorithm> // Best practice for min()
using namespace std;

void check(long long a, long long b) { 
    if(a == 0 || b == 0) {
        cout << "Invalid Input" << endl;
        return;
    }

    long long HCF = 1;
    
    for(long long i = min(a, b); i >= 1; i--) {
        if(a % i == 0 && b % i == 0) {
            HCF = i; 
            break; 
        }
    }

    long long LCM = (a / HCF) * b;

    cout << "Numbers: " << a << ", " << b << endl;
    cout << "HCF: " << HCF << endl;
    cout << "LCM: " << LCM << endl;
    cout << "----------------" << endl;
}

int main() {
    check(12, 24);
    check(0, 23);
    check(24, 24);
    check(64, 34);
    return 0;
}
