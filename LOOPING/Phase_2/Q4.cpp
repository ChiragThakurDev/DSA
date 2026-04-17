//Find the sum of digit of a number
 #include<iostream>
using namespace std;
void check(int num){ 
if(num<0){ 
cout<<"Invalid Input"<<endl; 
return ; 
} 
int sum=0; 
//for(int i=1;i<=num;){ // sum+=num%10; // num=num/10; //} 
while(num)
{ sum+=num%10; 
  num=num/10; 
} 
cout<<"The sum of digit of a number is: "<<sum<<endl; 
} 
int main()
{ 
  check(2345); 
  check(76543); 
  check(0); 
  check(1); 
  check(98765); 
  check(-2345); 
  return 0; }