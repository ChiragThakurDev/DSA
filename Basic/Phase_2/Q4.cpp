//Check if one of two given numbers is a multiple of the other
#include<iostream>
using namespace std;

void check(int a,int b){
    if(a == 0 || b == 0){
        cout<<"Cannot check multiples with zero ("<<a<<","<<b<<")"<<endl;
    }
    else if(a % b == 0){
        cout<<a<<" is a multiple of "<<b<<endl;
    }
    else if(b % a == 0){
        cout<<b<<" is a multiple of "<<a<<endl;
    }
    else{
        cout<<"The numbers are not multiples of each other"<<endl;
    }
}

int main(){
    check(6,2);
    check(9,3);
    check(2,4);
    check(5,3);
    check(0,5); // test case
    return 0;
}