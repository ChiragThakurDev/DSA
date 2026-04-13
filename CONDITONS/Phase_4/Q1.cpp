//Take a Character and check if it is a letter , a digit, or neither
#include<iostream>
using namespace std;

void check(char ch){
    if(ch>='0'&&  ch<='9'){
        cout<<"The Value is in digit: "<<ch<<endl;
    }
    else if(ch>='a' && ch<='z'){
        cout<<"The Value is in letter: "<<ch<<endl;
    }
    else if(ch>='A' && ch<='Z'){
        cout<<"The Value is in letter: "<<ch<<endl;
    }
    else {
        cout<<"Neither is letter nor is digit: "<<ch<<endl;
    }
}
int main(){
    check('a');
    check('A');
    check('J');
    check('j');
    check('9');
    check('5');
    check('&');
    check('*');
    return 0;
}