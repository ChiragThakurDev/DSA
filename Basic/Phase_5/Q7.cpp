//Take three numbers and if they are in geometric progression
#include<iostream>
using namespace std;

void GP(int a,int b,int c){
    if(b*b==a*c){
        cout<<"The given numbers are the geometric progression"<<endl;
    }
    else{
        cout<<"The given numbers are not geometric progression"<<endl;
    }
}

int main(){
    GP(2, 4, 8);
    GP(3, 9, 27);
    GP(2, 5, 10);

    GP(1, 2, 4);        
    GP(5, 10, 20);      
    GP(10, 5, 2);       
    GP(7, 7, 7);        
    GP(4, 6, 9);        
    GP(3, 12, 48);      
    GP(2, 6, 18);       
    GP(8, 16, 32);      
    GP(9, 3, 1);        
    GP(2, 3, 6);        

    return 0;
}