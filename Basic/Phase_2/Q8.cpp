// Take an alphabet character and check if it lies between ‘a’ and ‘m’ or ‘n’ and ‘z’
#include<iostream>
using namespace std;

void check(char ch){
    if(ch>='a' && ch<='m'){
        cout<<"An alphabet character is lies between a to m :"<<ch<<endl;
    }
    else if(ch>='n' && ch<='z'){
    cout<<"An alphabet character is lies between n to z :"<<ch<<endl;
    }
    else{
        cout<<"Invalid data: "<<ch<<endl;
    }
}
int main(){
    check('f');
    check('k');
    check('r');
    check('x');
    check('3');
    check('A');
    check('V');
    return 0;
}