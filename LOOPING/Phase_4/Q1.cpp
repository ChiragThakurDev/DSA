//Print all numbers whose sum of digits is even.
#include<iostream>
using namespace std;
void check(int num){
    if(num<0){
        cout<<"Invalid Input"<<endl;
      return ;
    }
    int temp=num;
    int sum=0;
    int sum1=0;
    for(int i=1;i<=temp;i++){
        if(i<10&&i%2==0){
            sum=i;
            cout<<"The sum of 1-9 digits and even is: "<<sum<<endl;
        }
        else if(i>=10){
          int n=i;
          while(n){
            sum1+=n%10;
            n/=10;
          }
          if(sum1%2==0){
            cout<<"The sum of n digits and even is :"<<sum1<<endl;
          }
          sum1=0;
        }
    }
    cout<<" "<<endl;
}

int main(){
    check(10);
    check(20);
    check(1);
    check(100);
    return 0;
}