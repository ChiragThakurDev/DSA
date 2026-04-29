//Take 5 numbers as input. If the user enters 0, skip it using continue. At the end, print the sum of all non-zero numbers entered.
#include<iostream>
using namespace std;
int main(){
    int sum=0;
    for(int i=0;i<5;i++){
        int num;
        cout<<"Enter a number: ";
        cin>>num;
        if(num==0){
            continue;
        }
        sum+=num;
    }
    cout<<"Sum of non-zero numbers: "<<sum<<endl;
    return 0;
}