	//Print the product of digits of a given number
#include<iostream>
using namespace std;
void check(int n){
 if(n<1){
 cout<<"Invalid data"<<endl;
 return ;
 }
 int prod=1;
 while(n>0){
 int digit=n%10;
 n=n/10;
 prod*=digit;
 }
 cout<<"The Product of digits of a given number: "<<prod<<endl;
}
int main(){
check(23);
check(1234);
check(-234);
check(0);
check(98765);
return 0;
}
