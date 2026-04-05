//Take two numbers and print the larger one.
#include<iostream>
using namespace std;
void check(int a,int b){
    if(a>b){
        cout<<"First number is greater than second one"<<endl;
    }
    else if(a==b){
        cout<<"Both numbers are equal"<<endl;
    }
    else{
        cout<<"Second number is greater than first one"<<endl;
    }
}
int main(){
    check(12,42);
    check(89,90);
    check(99,77);
    check(67,54);
    check(13,13);
    check(10,10);
    check(1,1);
    return 0;
}