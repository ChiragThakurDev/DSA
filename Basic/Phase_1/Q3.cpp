// Check if a number is divisible by 5
#include <iostream>
using namespace std;
void check(int num){
    if(num%5==0){
        cout<<"The number is divisible by 5: "<<num<<endl;
    }
    else{
        cout<<"The number is not divisible by 5: "<<num<<endl;
    }
}
int main(){
    check(23);
    check(25);
    check(78);
    check(100);
    return 0;
}