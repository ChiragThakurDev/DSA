#include <iostream>
using namespace std;

// a = first term, r = ratio, n = number of terms
void geo(double a, double r, int n) {
    double total_Sum = 0;
    double current_Value = a;

    cout << "Sequence: ";
    for(int i = 0; i < n; i++) { // Changed <= to < to get exactly 'n' terms
        cout << current_Value << " ";
        total_Sum += current_Value;
        current_Value *= r;
    }

    cout << "\nThe total sum is: " << total_Sum << endl << endl;
}

int main() {
    // 4 terms: 3 + 6 + 12 + 24 = 45
    geo(3, 2, 4);

    // 10 terms starting at 4 with ratio 5
    geo(4, 5, 10);

    return 0;
}