//Print the gcd/hcf of two numbers
#include<iostream>
#include<cmath>
using namespace std;

void GCD(int a, int b){
  if(a==0 || b==0){
   cout<<"Invalid Input"<<endl;
  return;
}
int total=1;
for(int i=1;i<=min(a,b);i++){
  if(a%i==0 && b%i==0){
     total=a;
  }


}
cout<<total<<endl;

}
int main(){
    GCD(12,24);
    GCD(2,6);
    GCD(36,64);
    GCD(0,17);
    return 0;
}