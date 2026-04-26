//Print all numbers that are palindromes between 1–500.
#include<iostream>
using namespace std;

void check(int num){
    if(num<0){
        cout<<"Invalid Input"<<endl;
        return ;
    }
    for(int i=1;i<=num;i++){
        int n=i;
        int reverse=0;
        while(n){
         reverse=(reverse*10)+n%10;         
          n/=10;}
if(i==reverse){
 cout<<"The number btw 1 to "<<num<<" and the value "<<i<<" is palidrome"<<endl;
  }
    }
cout<<" "<<endl;
  }
int main(){
    check(500);
    check(1);
    check(1000);
    return 0;
}