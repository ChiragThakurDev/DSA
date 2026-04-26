// Question: Print numbers between 1–100 whose digits add up to a multiple of 3.
#include <iostream>
using namespace std;

void check(int num) {
    if (num < 0) {
        cout << "Invalid Input" << endl;
        return;
    }

    for (int i = 1; i <= num; i++) {
        int n = i;
        int sum = 0;

        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }

        if (sum % 3 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    check(100);
    check(1000);
    return 0;
}