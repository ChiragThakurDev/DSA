// Check voting eligibility for a given age (18+)
#include<iostream>
using namespace std;

void check(int age){
    if(age<0 || age>100){
        cout<<"Invalid age "<<age<<endl;
    }
    else if(age<18){
        cout<<"You are not eligible for voting: "<<age<<endl; 
    }
    else{
        cout<<"You are eligible for voting: "<<age<<endl;
    }
}
int main(){
    check(78);
    check(19);
    check(8);
    check(101);
    check(-20);
   return 0;
    
}