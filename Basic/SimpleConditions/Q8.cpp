//Take a temperature value and print “Cold”, “Warm”, or “Hot” using range conditions.
#include<iostream>
using namespace std;
void tempt(int range){
    if(range<15){
        cout<<"The temperature is Cold at: "<<range<<endl;
        
    }
    else if(range>=15 && range<30){
        cout<<"The temperature is Warm at: "<<range<<endl;
    }
    else{
        cout<<"The temperature is Hot at: "<<range<<endl;
    }
}

int main(){
    tempt(45);
    tempt(12);
    tempt(25);
    return 0;
}