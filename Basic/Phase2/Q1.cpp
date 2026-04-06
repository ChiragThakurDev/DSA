//Take three sides and check if they form a valid triangle.
#include<iostream>
using namespace std;

void check(int a,int b,int c){
    if(a+b>c && a+c>b && b+c>a){
        cout<<"They form a valid triangle "<<" "<< a <<" "<< b <<" "<< c <<endl;
    }
    else{
        cout<<"They don't form a valid triangle"<<" "<< a <<" "<< b <<" "<< c <<endl;
    }
}

int main(){
    check(2,3,12);
    check(2,3,2);
    return 0;
}