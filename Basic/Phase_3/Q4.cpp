// Check whether a given integer is single-digit, double-digit, or multi-digit.
#include<iostream>
using namespace std;
void check(int num){
    if(num>=-9 && num<=9){
        cout<<"The give integer is single-digit: "<<num<<endl;
    }
    else if(num>=-99 && num<=99){
         cout<<"The give integer is double-digit: "<<num<<endl;
    }
    else{
         cout<<"The give integer is multi-digit: "<<num<<endl;
    }
}
int main(){
    check(8);
    check(-8);
    check(10);
    check(-10);
    check(100);
    check(-100);
    return 0;
}