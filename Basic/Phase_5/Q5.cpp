//Take three numbers and check if they can form Arthematic Mean
#include<iostream>
using namespace std;
void AM(int a,int b,int c){
 int sum=a+b+c;	
 double count=3.0;
 if(count==0){
   cout<<"Invalid Input"<<endl;
 }
 else{
 double total=sum/count;
 cout<<"The AM of given numbers: "<<a<<","<<b<<","<<c<<" is:"<<total<<endl;
 }
}
int main(){
AM(2,3,4);
AM(6,5,3);
AM(2,5,3);
AM(56,5,3);
AM(96,5,3);
AM(16,5,3);
AM(63,5,3);
AM(64,5,3);
AM(64,5,3);
AM(3,3,3);
return 0;
}
