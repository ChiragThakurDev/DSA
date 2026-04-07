#include<iostream>
using namespace std;

void monthDays(int month){
    if(month < 1 || month > 12){
        cout << "Invalid Month: " << month << endl;
    }
    else if(month == 2){
        cout << "Month " << month << " has 28 days" << endl;
    }
    else if(month==4 || month==6 || month==9 || month==11){
        cout << "Month " << month << " has 30 days" << endl;
    }
    else{
        cout << "Month " << month << " has 31 days" << endl;
    }
}

int main(){
    monthDays(1);
    monthDays(2);
    monthDays(4);
    monthDays(7);
    monthDays(11);
    monthDays(13); // invalid
    return 0;
}