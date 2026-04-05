//Check if a number is divisible by both 3 and 5
#include<iostream>
using namespace std;
void check(int num){
    if(num%5==0 && num%3==0){
        cout<<"The number is divisible by both 3 and 5: "<<num<<endl;
    }
    else{
        cout<<"The number is not divisible by both 3 and 5: "<<num<<endl;
    }
}
int main(){
check(15);
check(30);
check(45);
check(60);
check(75);
check(14);
check(22);
check(33);
check(41);
check(58);
return 0;
}