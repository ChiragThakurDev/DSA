// Take a single digit (0–9) and print its word form (“Zero” to “Nine”).
#include<iostream>
using namespace std;

void check(int num){
    if(num<0 || num>9){
        cout<<"Invalid Data: "<<num<<endl;
    }
    else if(num==0){
        cout<<"Zero"<<endl;
    }
    else if(num==1){
        cout<<"One"<<endl;
    }
    else if(num==2){
        cout<<"Two"<<endl;
    }
    else if(num==3){
        cout<<"Three"<<endl;
    }
    else if(num==4){
        cout<<"Four"<<endl;
    }
    else if(num==5){
        cout<<"Five"<<endl;
    }
    else if(num==6){
        cout<<"Six"<<endl;
    }
    else if(num==7){
        cout<<"Seven"<<endl;
    }
    else if(num==8){
        cout<<"Eight"<<endl;
    }
    else {
        cout<<"Nine"<<endl;
    }
}
int main(){
    check(67);
    check(-3);
    check(0);
    check(9);
    check(7);
    check(5);
    check(4);
    check(3);
    check(2);
    check(8);
    check(100);
    check(-234);
    return 0;
}