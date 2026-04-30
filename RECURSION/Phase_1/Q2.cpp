//Print the number from n down to 1 using recursion.
#include<iostream>
using namespace std;

void check(int n){
if(n<=0){
return;
}
cout<<n<<" ";
check(n-1);
}
int main(){
check(10);
cout<<endl;
check(100);
cout<<endl;
return 0;
}