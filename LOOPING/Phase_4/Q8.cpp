//Print factorial of each number from 1 to n.
#include<iostream>
using namespace std;
void factorial(int num){
    if(num<0){
        cout<<"Invalid Input"<<endl;
        return ;
    }
    long long fact=1;
    for(int i=1;i<=num;i++){
        fact*=i;
        cout<<"The factorial of a number "<<i<<" is: "<<fact<<endl;
    }
    cout<<" "<<endl;
}
int main(){
    factorial(10);
    factorial(5);
    return 0;
}