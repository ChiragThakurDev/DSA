//Take a 3-digit number and check if the sum of the first and last digit equals the middle digit.
#include<iostream>
using namespace std;
void digit(int num){
int a=num/100;
int b=(num/10)%10;
int c=num%10;
if(num<100 || num>999){

cout<<"Invalid Data: "<<num<<endl;
}
else if(a+c==b){
cout<<"The total "<<num<<" sum of first digit "<<a<<" and "<<c<<" are equal to "<<b<<endl;
}
else{
cout<<"The total "<<num<<" sum of first digit "<<a<<" and "<<c<<" are not equal to "<<b<<endl;

}
}
int main(){
digit(242);
digit(456);
digit(4567);
digit(363);
digit(0);
digit(12345678);
digit(484);
return 0;
}
