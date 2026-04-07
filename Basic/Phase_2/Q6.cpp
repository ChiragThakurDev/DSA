// Take the hour of the day (0–24) and print “Good Morning”, “Good Afternoon”, “Good
// Evening”, or “Good Night”.
#include<iostream>
using namespace std;

void hour(int val){
    if(val<0 || val>23){
        cout<<"Invalid Time "<<val<<":00"<<endl; 
    }
    else if(val>=5 && val<=11){
        cout<<"Good Morning "<<val<<":00"<<endl;
    }
    else if(val>=12 && val<=16){
        cout<<"Good Afternoon "<<val<<":00"<<endl;
    }
    else if(val>=17 && val<=20){
        cout<<"Good Evening "<<val<<":00"<<endl;
    }
    else{
        cout<<"Good Night "<<val<<":00"<<endl;
    }
}
int main(){
    hour(-1);
    hour(25);
    hour(0);
    hour(12);
    hour(15);
    hour(19);
    hour(23);
    return 0;
}