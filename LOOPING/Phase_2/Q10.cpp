//Print the sum of n of fibonacci series/ Number
#include<iostream>
using namespace std;
void check(int n){
if(n<0){
cout<<"Invalid Input"<<endl;
return ;
}
int a=0;
int b=1;
int sum=0;
for(int i=1;i<=n;i++){
//cout<<a<<endl;
sum+=a;
int tem=a+b;
 a=b;
 b=tem;
}
cout<<"The sum of "<<n<< " of fibonacci number is: "<<sum<<endl;
cout<<" "<<endl; 
}
int main(){
check(10);
check(25);
check(-234);
check(0);
check(1);
return 0;
}

