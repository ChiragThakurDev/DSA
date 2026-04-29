//Print the sum of all odd digits and even digits separately in a number
#include<iostream>
using namespace std;
void sum_of_digits(int num){
    int sum_odd=0, sum_even=0;
    if(num<0){
        num=-num;
    }
    while(num){
        int digit=num%10;
        if(digit%2==0){
            sum_even+=digit;
        }
        else{
            sum_odd+=digit;
        }
        num/=10;
    }
    cout<<"Sum of odd digits: "<<sum_odd<<endl;
    cout<<"Sum of even digits: "<<sum_even<<endl;
}
int main(){
    sum_of_digits(12345);
    sum_of_digits(987654321);
    sum_of_digits(0);
    sum_of_digits(-12345);
    return 0;
}