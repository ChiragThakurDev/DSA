//Print Fibonacci series up to n terms
#include<iostream>
using namespace std;
void check(int n){
if(n<0){
cout<<"Invalid Input"<<endl;
return ;
}
int a=0;
int b=1;
for(int i=1;i<=n;i++){
cout<<a<<endl;
int tem=a+b;
 a=b;
 b=tem;
}
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

