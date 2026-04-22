//Print all the factors of a number
#include<iostream>
using namespace std;

void printFactors(long long n) {
    if(n <= 0) {
        cout << "Invalid Input" << endl;
        return;
    }

    cout << "Factors of " << n << ": ";
    for(long long i = 1; i <= n; i++) {
        if(n % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}
int main() {
    printFactors(12);
    printFactors(0);
    printFactors(24);
    printFactors(64);
    return 0;
}
