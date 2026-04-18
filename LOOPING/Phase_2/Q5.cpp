//Check if a number is an Armstrong number
#include<iostream>
#include<cmath>
using namespace std;

void Armstrong(int num){
  
if(num<=0){
   cout<<"Invalid Input: "<<endl;
   return ;
}
int n=num;
int count=0;
int i=1;
int original=num;
double sum=0;

n=num;
while(n){
  count+=i;
  n=n/10;
}
cout<<"The total digits of a given number is :"<<count<<endl;
n=num;
while(n){
  int digit=0;
   digit+=n%10;
   sum+=pow(digit,count);
   n=n/10;  
}
cout<<"The sum of a given digits are:  "<<sum<<endl;

if((int)sum==original){
cout<<"The given number is an Armstrong Number: "<<original<<endl;
}
else{
cout<<"The given number is not a Armstrong Number: "<<original<<endl;
}
}
int main(){
 Armstrong(456);
 Armstrong(654);
//  Armstrong(123678);
 Armstrong(153);
 return 0;
}
