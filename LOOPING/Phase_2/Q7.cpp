//Print all prime numbers between 1 and 100.
#include<iostream>
using namespace std;

bool isPrime(int n){
if(n<=1)return false;

for(int i=2;i*i<=n;i++){
if(n%i==0){
return false ;
}
}
return true;
}
int main(){
int n=100;
for(int i=1;i<=n;i++){
if(isPrime(i)){
cout<<"The number "<<i<< " is a Prime Number"<<endl;
}
}
return 0;
}
