//Print n terms of AP series with given a and d.
#include <iostream>
using namespace std;

void a_P(int n, int a, int d) {
    int current = a; 
    cout << "The AP is: ";

    for(int i = 1; i <= n; i++) {
        // 1. Print the current number first
        cout << current << " "; 
        
        // 2. Then update it for the next round of the loop
        current += d; 
    }
    cout << endl; // Move to a new line after the sequence is done
}
int main() {
    a_P(5, 2, 3); // Example: n=5, a=2, d=3
    return 0;
}