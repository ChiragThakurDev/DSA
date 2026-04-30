//Print the sum of n natural numbers recursively
#include<iostream>
using namespace std;

int check(int n){
if(n<=0){
return 0 ;
}
return n+check(n-1);
}
int main(){
cout<<check(10);
cout<<endl;
cout<<check(100);
cout<<endl;
return 0;
}