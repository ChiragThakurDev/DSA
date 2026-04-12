// Take day and month and check if it forms a valid calendar date (ignoring leap years).
#include<iostream>
using namespace std;

void check(int day,int month){
    if(day <= 0 || month <= 0 || month > 12 || day > 31){
        cout<<"Invalid Data "<<endl;
    }
    else if(month == 2 && day > 28){
        cout<<"The day "<<day<<" and "<<month<<" are not valid"<<endl; 
    }
    else if(day <= 31 && 
       (month == 1 || month == 3 || month == 5 || 
        month == 7 || month == 8 || month == 10 || month == 12)){
        cout << "The day " << day << " and " << month << " are valid" << endl;
    }
    else if(day <= 30 && (month == 4 || month == 6 || month == 9 || month == 11)){
        cout << "The day " << day << " and " << month << " are valid" << endl;
    }
    else{
        cout << "The day " << day << " and " << month << " are not valid" << endl;
    }
}

int main(){
    check(12,56);
    check(29,2);
    check(28,2);
    check(31,7);
    check(31,4);
    check(30,4);
    return 0;
}