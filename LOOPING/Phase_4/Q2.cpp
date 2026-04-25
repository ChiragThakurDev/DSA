//Count how many numbers between 1–500 are divisible by 7 but not by 5.
#include<iostream>
using namespace std;

void check(int num){
    if(num<0){
        cout<<"Invalid Input"<<endl;
        return ;
    }
    int count=0;
    for(int i=1;i<=num;i++){
        if(i%7==0 && i%5!=0){
            count++;
        }

}
cout<<"The total numbers btw 1 to "<<num<<" which is divisble by 7 but not 5 are :"<<count<<endl;
}
int main(){
    check(1);
    check(500);
    check(1000);
    return 0;
}