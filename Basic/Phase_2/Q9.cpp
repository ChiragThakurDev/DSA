// Take a day number (1–7) and print the corresponding day name.
#include<iostream>
using namespace std;
void day(int num){
    if(num<1 || num>7){
        cout<<"Invalid Day "<<num<<endl;
    }
    else if(num==1){
        cout<<"The day is Monday: "<<num<<endl;
    }
    else if(num==2){
        cout<<"The day is Tuesday: "<<num<<endl;
    }
    else if(num==3){
        cout<<"The day is Wednesday: "<<num<<endl;
    }
    else if(num==4){
        cout<<"The day is Thursday: "<<num<<endl;
    }
    else if(num==5){
        cout<<"The day is Friday: "<<num<<endl;
    }
    else if(num==6){
        cout<<"The day is Saturday: "<<num<<endl;
    }
    else{
        cout<<"The day is Sunday: "<<num<<endl;
    }
}

int main(){
    day(4);
    day(-1);
    day(9);
    day(3);
    day(7);
    day(8);
    day(1);
    day(2);
    day(6);
    day(5);
    return 0;
}