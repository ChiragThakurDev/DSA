//Take electricity units consumed and calculate the bill as per slabs (using if-else).
#include<iostream>
using namespace std;

void check(int unit){
    if(unit < 0 || unit > 1000){
        cout << "Invalid Input" << endl;
        return;
    }

    int bill = 0;

    if(unit <= 100){
        bill = unit * 5;
    }
    else if(unit <= 300){
        bill = (100 * 5) + (unit - 100) * 7;
    }
    else{
        bill = (100 * 5) + (200 * 7) + (unit - 300) * 10;
    }

    cout << "Units consumed: " << unit 
         << " | Total bill: " << bill << endl;
}

int main(){
    check(67);
    check(78);
    check(345);
    check(789);
    check(987);
    check(23);
    check(0);
    check(-234);
    check(456);
    return 0;
}