//Check the number is palindrome or not using recursion
#include <iostream>
using namespace std;
bool isPalindrome(int n, int &temp) {
    if (n == 0) {
        return true;
    }
    int lastDigit = n % 10;
    temp = temp * 10 + lastDigit;
    return isPalindrome(n / 10, temp);
}
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int temp = 0;
    if (isPalindrome(number, temp) && temp == number) {
        cout << number << " is a palindrome." << endl;
    } else {
        cout << number << " is not a palindrome." << endl;
    }
    return 0;
}