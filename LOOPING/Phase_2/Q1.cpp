//Count the number of digits in a given number
#include<iostream>
#include<cmath>
using namespace std;
void check(long long n){
int digit=0;
//for(int i=1;i<=n;){ //1<234 
  //  digit+=i; //digit= 1 if there is a single value n=234 
   // n=n/10;   //234= 23
   // }
  if(n<0){
   n=abs(n);
  }
  if(n==0){
   digit=1;
  }
 int i=1;
 while(i<=n){
 digit+=i;
 n=n/10;
 }
cout<<"The digits of a given number:  "<<digit<<endl;
}

int main(){
check(234);
check(7);
check(3456789);
check(-23456);
check(4567890345678);
return 0;
}


