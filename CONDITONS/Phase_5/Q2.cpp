//Take three numbers and check if they can form a Pythagorean triplet.
#include<iostream>
using namespace std;

void Pythagorean(int a, int b, int c){
    if((a*a + b*b == c*c) ||
       (a*a + c*c == b*b) ||
       (b*b + c*c == a*a)){
        cout<<"They form the Pythagorean triplet"<<endl;
    }
    else{
        cout<<"They don't form the Pythagorean triplet"<<endl;
    }
}

int main(){
    Pythagorean(2,2,8);
    Pythagorean(3, 4, 5);
    Pythagorean(5, 12, 13);
    Pythagorean(2, 3, 4);
    Pythagorean(5, 3, 4); // now correct
    return 0;
}