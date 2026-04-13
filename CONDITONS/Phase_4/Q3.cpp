///Take three numbers and print the median value (neither maximum nor minimum)
#include<iostream>
using namespace std;

void check(int a,int b,int c){
    if(a<0 || b<0 || c<0){
        cout<<"Invalid Data: "<<a<<" "<<b<<" "<<c<<endl;
    }
    else if((a > b && a < c) || (a < b && a > c)){
        cout<<"The value "<<a<<" is median"<<endl;
    }
    else if((b > a && b < c) || (b < a && b > c)){
        cout<<"The value "<<b<<" is median"<<endl;
    }
    else{
        cout<<"The value "<<c<<" is median"<<endl;
    }
}

int main(){
    check(3,4,5);
    check(-3,7,9);
    check(98,67,100);
    check(55,89,76);
    return 0;
}