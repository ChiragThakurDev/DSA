//if the sides form a valid triangle, determine whether it is  equilateral, isosceles, or scalene.
#include<iostream>
using namespace std;

void check(int a,int b,int c){
    if(a+b>c && a+c>b && b+c>a){
        cout<<"They form a valid triangle "<<" "<< a <<" "<< b <<" "<< c <<endl;
        
        if(a == b && b == c){
            cout<<"They form an Equilateral triangle"<<endl;
        }
        else if(a == b || b == c || a == c){
            cout<<"They form an Isosceles triangle"<<endl;
        }
        else{
            cout<<"They form a Scalene triangle"<<endl;
        }
    }
    else{
        cout<<"They don't form a valid triangle "<<" "<< a <<" "<< b <<" "<< c <<endl;
    }
}

int main(){
    check(2,3,2);
    check(2,2,2);
    check(1,1,1);
    check(3,3,3);
    return 0;
}

// Logic:
// First, check if it’s a valid triangle 
// Then classify:
// Equilateral → all sides equal (a == b == c)
// Isosceles → any two sides equal (a == b || b == c || a == c)
// Scalene → all sides different