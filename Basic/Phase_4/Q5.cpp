//Take income and age, and check if eligible for tax (age>18 and income >5L)
#include<iostream>
using namespace std;

void check(int age, int income){
    // Validation
    if(age < 0 || age > 120 || income < 0 || income > 10000000){
        cout<<"Invalid Data: "<<age<<" and "<<income<<endl;
    }
    // Eligible
    else if(age > 18 && income > 500000){
        cout<<"According to your age "<<age<<" and income "<<income
            <<", you are eligible for tax."<<endl;
    }
    // Not eligible (everything else valid)
    else{
        cout<<"According to your age "<<age<<" and income "<<income
            <<", you are NOT eligible for tax."<<endl;
    }
}

int main(){
    check(25, 500000);       
    check(45, 10000000);     
    check(0, 0);             
    check(120, 7500000);     
    check(-5, 400000);       
    check(130, 600000);      
    check(30, -1000);        
    check(40, 20000000);     
      check(-10, -5000);       
    check(150, 20000000);    

    check(60, 9999999);      
    return 0;
}