//Check if a string is palindrome using recursion.
#include <iostream>
using namespace std;
bool check(string &s, int start, int end)
{
    if (start >= end)
        return true;
    if (s[start] != s[end])
        return false;
    return check(s, start + 1, end - 1);
}
int main()
{
    
    string s = "racecar";
    if (check(s, 0, s.length() - 1))
        cout << "Yes it is a palindrome";
    else
        cout << "No it is not a palindrome";
    return 0;
}