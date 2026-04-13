//Take 24-hours time(hours and minutes) and print whether it is AM or PM
#include<iostream>
using namespace std;
void check(int hours,int minutes ){
    if((hours < 0 || hours > 23) || (minutes < 0 || minutes > 59)){
        cout<<"Invalid Time: "<<hours<<":"<<minutes<<endl;
    }
    else if(hours<12){
         cout<<"The current time is: "<<hours<<":"<<minutes<<"AM"<<endl; 
    }
    else {
        cout<<"The current time is: "<<hours<<":"<<minutes<<"PM"<<endl;
    }
}
int main(){
check(0, 0);  
check(9, 15);    
check(11, 59);    
check(12, 00);    
check(14, 30);   
check(18, 45);   
check(23, 59); 
check(25,88);
return 0;
}