// Take coordinates (x, y) and determine which quadrant the point lies in.
#include <iostream>
using namespace std;
void check(int x ,int y){
    if(x==0 && y==0){
        cout<<"The cooardinates are at the origin: "<<x<<" "<<y<<endl;
    }
    else if(x>0 && y>0){
        cout<<"The cooardinates are at the First Quadrant: "<<x<<" "<<y<<endl;
    }
    else if(x<0 && y>0){
        cout<<"The cooardinates are at the Second Quadrant: "<<x<<" "<<y<<endl;
    }
    else if(x<0 && y<0){
        cout<<"The cooardinates are at the Third Quadrant: "<<x<<" "<<y<<endl;
    }
    else {
        cout<<"The cooardinates are at the Fourth Quadrant: "<<x<<" "<<y<<endl;
    }
}

int main(){
    check(7,2);
    check(0,0);
    check(-4,-4);
    check(-2,4);
    check(9,-5);
    check(10,10);
    check(-5,-5);
    return 0;
}