//Print only odd numbers  from 1 to n recursively
#include<iostream>
using namespace std;

void check(int n){
if(n<=0){
return;
}
check(n-1);
if(n%2!=0){
cout<<n<<" ";
}
}
int main(){
check(10);
cout<<endl;
check(100);
cout<<endl;
return 0;
}