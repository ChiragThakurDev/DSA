// Count the number of digits using recursion
#include<iostream>
using namespace std;
int countDigit(int n){
    if(n<10){
        return 1;
    }
    return 1+countDigit(n/10);
}
int main(){
    cout<<countDigit(10)<<endl;
    cout<<countDigit(123)<<endl;
    cout<<countDigit(987654)<<endl;
    return 0;
}