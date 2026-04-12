#include<iostream>
using namespace std;

void check(int hours,int min)
{
    if(min<0 || min>59 || hours<0 || hours>23 ){
        cout<<"Invalid Time"<<endl;
    }
    else {
        int m = min * 6;
        int h = (hours % 12) * 30 + (min * 0.5);

        int d = (m > h) ? (m - h) : (h - m);
        int angle = (d > 180) ? (360 - d) : d;

        cout<<"The smaller angle is: "<<angle<<endl;
    }
}

int main(){
    check(23,10);
    check(12,23);
    check(15,53);
    return 0;
}