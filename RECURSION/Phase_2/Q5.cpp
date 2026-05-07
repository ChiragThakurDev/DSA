//Find GCD (HCF) of two numbers using Euclid’s algorithm recursively.
#include <iostream>
using namespace std;

// Recursive function to return gcd of a and b
int gcd(int a, int b) {
    // Base case: when the remainder becomes 0
    if (b == 0)
        return a;
    
    // Recursive call: pass b as the new 'a' and (a % b) as the new 'b'
    return gcd(b, a % b);
}

int main() {
    int a = 98, b = 56;
    cout << "GCD of " << a << " and " << b << " is: " << gcd(a, b);
    return 0;
}