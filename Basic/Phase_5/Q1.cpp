// Take coordinates (x, y) and check if the point lies on the X-axis, Y-axis, or at the
// origin.
#include<iostream>
using namespace std;

void check(int a, int b){
    if(a == 0 && b == 0){
        cout << "The point lies on the Origin: " << a << " and " << b << endl;
    }
    else if(b == 0){
        cout << "The point lies on X-axis: " << a << " and " << b << endl;
    }
    else if(a == 0){
        cout << "The point lies on Y-axis: " << a << " and " << b << endl;
    }
    else{
        cout << "The point is not on any axis: " << a << " and " << b << endl;
    }
}

int main(){
    check(0,0);
    check(3,5);
    check(6,2);
    check(5,0);
    check(-7,-4);
    check(-4,-7);
    return 0;
}