// Check if a number lies within the range [100, 999]
#include<iostream>
using namespace std;

void check(int num){
    // if(num<100 || num>999){
    //      cout<<"Invalid range "<<num<<endl;
    // }
    // else 
    if(num>=100 && num<=999){
        cout<<"The number is lies btw the [100-999] range: "<<num<<endl;
    }
    else{
        cout<<"The number is not lies btw the [100-999] range: "<<num<<endl;
    }
}
int main(){
    check(678);
    check(00);
    check(-234);
    check(34);
    check(234567);
    check(987);
    check(455);
    return 0;
}