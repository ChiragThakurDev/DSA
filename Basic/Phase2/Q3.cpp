//Take marks (0–100) and print the corresponding grade (A/B/C/D/F).
#include<iostream>
using namespace std;

void marks(int num){
    if(num < 0 || num > 100){
        cout<<"Invalid marks: "<<num<<endl;
    }
    else if(num >= 90){
        cout<<"Grade A: "<<num<<endl;
    }
    else if(num >= 75){
        cout<<"Grade B: "<<num<<endl;
    }
    else if(num >= 65){
        cout<<"Grade C: "<<num<<endl;
    }
    else if(num >= 45){
        cout<<"Grade D: "<<num<<endl;
    }
    else{
        cout<<"Grade F: "<<num<<endl;
    }
}

int main(){
    marks(100);
    marks(10);
    marks(25);
    marks(55);
    marks(78);
    marks(150);  // test invalid
    return 0;
}