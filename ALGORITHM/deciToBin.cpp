#include<iostream>
using namespace std;
int decToBin(int num){
int ans=0;
int pow=1;
    while(num){
    int rem=num%2;
    num/=2;

    ans+=(rem*pow);
    pow*=10;
    }
return ans;
}

int main(){
    int num=55;

    cout<<"The decimal to binary is: "<<decToBin(num)<<endl;
    return 0;
}
