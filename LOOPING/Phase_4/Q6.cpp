//Print all numbers from 1–n whose binary representation has an even number of 1s
#include<iostream>
using namespace std;

void check(int num){
if(num<0){  
cout<<"Invalid Input"<<endl;
return ;
}
for(int i=1;i<=num;i++){
int count=0;
int n=i;
while(n){
if(n%2==1){
count++;
}
n=n/2;
}
if(count%2==0){
cout<<i<<" ";
}
}
}       
int main(){
check(10);
return 0;
}