// Take a character and check whether it’s uppercase, lowercase, a digit, or a special character.
#include<iostream>
using namespace std;;

void check(char val){
    if(val>='A'&& val<='Z'){
        cout<<"Uppercase letter "<<val<<endl;
    }
    else if(val>='a' && val<='z'){
        cout<<"Lowercase letter "<<val<<endl;
    }
    else if(val>='0' && val<='9'){
        cout<<"It's a digit "<<val<<endl;
    }
    else{
        cout<<"Special Character "<<val<<endl;
    }
}

int main(){
    check('0');
    check('a');
    check('g');
    check('A');
    check('X');
    check('@');
    check('&');
    check('^');
    check('7');
    check('6');
    return 0;
}