// Check if an amount can be evenly divided into 2000, 500, and 100 currency notes
#include<iostream>
using namespace std;

void check(int amount ){
    if(amount<=0){
        cout<<"Invalid amount: "<<amount<<endl;
    }
    else if(amount%100==0){
        cout<<"The amount is divisible by the given currency: "<<amount<<endl;
    }
    else{
        cout<<"The amount is not divisible by the given currency: "<<amount<<endl;
    }
}
int main(){
    check(0);
    check(-100);
    check(1000);
    check(2000);
    check(500);
    check(20);
    check(-98);
    check(67890);
    return 0;
}
