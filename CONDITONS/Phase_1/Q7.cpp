//Take three numbers and print the largest
#include<iostream>
using namespace std;

void check(int a,int b,int c){
    if(a == b && b == c){
        cout<<"All numbers are equal"<<endl;
    }
    else if(a >= b && a >= c){
        cout<<"First number is greatest"<<endl;
    }
    else if(b >= a && b >= c){
        cout<<"Second number is greatest"<<endl;
    }
    else{
        cout<<"Third number is greatest"<<endl;
    }
}

int main(){
    check(12,42,98);
    check(89,90,77);
    check(99,77,66);
    check(67,54,12);
    check(13,13,34);
    check(10,10,10);
    check(1,1,1);
    check(100,1000,10000);
    return 0;
}