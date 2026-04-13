// Take two angles of a triangle and compute the third angle.
#include<iostream>
using namespace std;
void check(int a ,int b){
    if(a<=0|| b<=0|| (a+b)>=180){
        cout<<"Invalid angles: "<<a<< " "<<b<<endl;
    }
    else{
        int c=180-(a+b);
        cout<<"The third angle is: "<<c<<endl;
    }
    
}
int main(){
    check(60,60);
    check(45,79);
    check(0,0);
    check(-78,-80);
    check(344,45);
    check(67,89);
    check(49,84);
    return 0;
}

//logic here 
//the total angle of triangle is 180 so if two angles are given then 
//we can do add the two angles subtract with the 180 
//e.g a=65,b=56
// c=180-65+56=59
// c=59