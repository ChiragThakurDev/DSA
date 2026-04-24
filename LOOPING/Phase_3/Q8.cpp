#include<iostream>
using namespace std;

void checkStrongNumber(int n) {
    if (n < 0) {
        cout << n << " is Invalid Input" << endl;
        return;
    }

    int temp = n;
    int sum_Of_Factorial = 0;
    int rem;
    if (n == 0) {
        sum_Of_Factorial = 1;
    } else {
        while (temp > 0) {
            rem = temp % 10;
            int fact = 1;
            for (int i = 1; i <= rem; i++) {
                fact *= i;
            }
            
            sum_Of_Factorial += fact;
            temp /= 10;
        }
    }
    if (sum_Of_Factorial == n) {
        cout << n << " is a Strong Number." << endl;
    } else {
        cout << n << " is NOT a Strong Number. (Sum: " << sum_Of_Factorial << ")" << endl;
    }
}

int main() {
    checkStrongNumber(1);      
    checkStrongNumber(145);    
    checkStrongNumber(40585);  
    checkStrongNumber(10);     
    return 0;
}