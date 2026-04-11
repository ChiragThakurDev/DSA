// Take a weekday number (1–7) and determine if it is a weekday or weekend.
//Take a weekday number (1–7) and determine if it is a weekday or weekend.
#include<iostream>
using namespace std;

void day(int num){
    if(num<0 ||num>7){
        cout<<"Invalid Date: "<<num<<endl;
        return;
    }
    switch(num){
        case 1: cout<<"The day is weekday and the day is Monday: "<<num;break;
        case 2: cout<<"The day is weekday and the day is Tuesday: "<<num;break;
        case 3: cout<<"The day is weekday and the day is Wednesday: "<<num;break;
        case 4: cout<<"The day is weekday and the day is thursday: "<<num;break;
        case 5: cout<<"The day is weekday and the day is Friday: "<<num;break;
        case 6: cout<<"The day is weekend and the day is Saturday: "<<num;break;
        case 7: cout<<"The day is weekend and the day is Sunday: "<<num;break;
    }
    cout<<endl;
}
int main(){
    day(-3);
    day(9);
    day(4);
    day(6);
    day(2);
    day(3);
    day(7);
    day(2);
    return 0;
}