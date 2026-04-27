//Find the smallest and largest digit of a number
#include<iostream>
using namespace std;
void check(int num){
if(num<0){
cout<<"Invalid Input"<<endl;
return ;
}
int smallest =9;
int largest=0;
for(int i=1;i<=num;i++){
int digit=0;
while(num){
digit=num%10;
if(digit<smallest){
smallest=digit;
}
if(digit>largest){
largest=digit;
}
num=num/10;
}
}
cout<<"Smallest: "<<smallest<<endl;
cout<<"Largest: "<<largest<<endl;
}
int main(){
check(567);
return 0;
}