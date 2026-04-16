//Print the reverse of a given number
#include<iostream>
#include<cmath>
using namespace std;
void check(long long n){
long long reverse=0;

while(n){
reverse=reverse*10+n%10;
n=n/10;
}
cout<<"The reverse of a number is: " <<reverse<<endl;
}

int main(){
check(234);
check(-6554);
check(0);
check(9876543);
check(10198201);
return 0;

}
