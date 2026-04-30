//Print the factorial of number recursively
#include<iostream>
using namespace std;

long long check(int n){
    if(n==0 || n==1)return 1;

return n*check(n-1);
}
int main(){
cout<<check(10);
cout<<endl;
cout<<check(15);
cout<<endl;

return 0;
}