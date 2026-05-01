//Find the nth fibonacci number recursively
#include<iostream>
using namespace std;

int fib(int num){

    if(num==0) return 0;
    if(num==1) return 1;
     
    return fib(num-1)+fib(num-2);
}

int main(){
   cout<<fib(10)<<" ";
   cout<<endl;
   cout<<fib(15)<<" ";
   cout<<endl;
   return 0;
}