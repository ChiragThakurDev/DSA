//Reverse a string using recursion
#include<iostream>
using namespace std;
void check(string &s, int start, int end){
    if(start>=end) return;
    char temp =s[start];
    s[start]=s[end];
    s[end]=temp;
    check(s,start+1,end-1);
}
int main(){
    string s="I am coder and I love coding and I am learning recursion";
    check(s,0,s.length()-1);
    cout<<s;
    return 0;
}

//Logic 
//We use the reference here beacuse we want to change the original string and not a copy of it. We use two pointers one at the start and one at the end of the string. We swap the characters at these pointers and then move the start pointer forward and the end pointer backward. We repeat this process until the start pointer is greater than or equal to the end pointer, which means we have reversed the entire string. That's why the & sign is used in the function parameter to pass the string by reference, allowing us to modify the original string directly.
// Time complexity: O(n) where n is the length of the string, because we need to traverse the string once to reverse it.
// Space complexity: O(n) in the worst case due to the recursive call stack, where
