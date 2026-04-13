//Take three numbers and check if they are in arithmetic progression.
#include<iostream>
using namespace std;
void AP(double a,double b,double c){
double d_1=b-a;
double d_2=c-b;
if(d_2!=d_1){
cout<<"The numbers are not Arithmetic progression"<<endl;
}
else{
 cout<<"The numbers are Arithmetic progression"<<endl;
}
}
int main(){
AP(2,3,4);
AP(2,3,4);        
AP(6,5,4);        // AP (integer)
AP(2,5,3);        // Not AP (integer)
AP(10,20,35);     // Not AP (integer)		  
AP(1.5,2.5,3.5);  // AP (decimal)
AP(0.2,0.4,0.6);  // AP (decimal)
AP(1.5,2.5,4.0);  // Not AP (decimal)
AP(0.1,0.3,0.5);  // Not AP (decimal)
return 0;
}