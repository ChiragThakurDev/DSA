//Find the sum of all factors of a number.
#include<iostream>
using namespace std;
void FACT(long long n){
if(n<=0){
cout<<"Invalid Input"<<endl;
return ;
}
long long sum=0;
cout<<endl;
cout<<"Factors of "<<n<< " is: ";
for(long long i=1;i<=n;i++){
if(n%i==0){
cout<<i<<" ";
	sum+=i;
}
}
cout<<endl;
cout<<"Sum of "<<n<<" factors is: "<<sum<<endl;
cout<<" "<<endl;
}
int main(){
FACT(10);
FACT(0);
FACT(50);
FACT(25);
FACT(100);
return 0;
}
