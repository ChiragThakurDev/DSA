// Calculate the sum of first n even numbers recursively
#include<iostream>
using namespace std;

int sum_Of_Number(int n){
    if(n==0){
        return 0;
    }
    return 2*n+ sum_Of_Number(n-1);
}
int main(){
    cout<<"Enter a number: ";
    int n;
    cin>>n;
    cout<<"The sum of first "<<n<<" even numbers is: "<<sum_Of_Number(n)<<endl;
    return 0;
}
