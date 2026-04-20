//Print all numbers between a and b divisible by 7.
#include <iostream>
using namespace std;
void check(int a,int b){
if(a<0 || b<0 || a>b || b<a){
cout<<"Invalid Input"<<endl;
return ;
}
for(int i=a;i<=b;i++){
if(i%7==0){
cout<<"The number "<<i<<" is by 7 which exists btw the "<<a<<" and "<<b<<endl;
}
}
cout<<" "<<endl;
}
int main(){
check(1,100);
check(100,200);
check(200,1000);
check(-2,100);
check(-100,-10);
check(50,10);
return 0;
}
