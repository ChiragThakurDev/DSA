//Check if a given year is a leap year
#include<iostream>
using namespace std;
void Year(int n){
    if((n%4==0 && n%100!=0)||(n%400==0)){
        cout<<"The year is a leap year: "<<n<<endl;
    }
    else{
        cout<<"The year is not a leap year: "<<n<<endl;
    }
}
int main(){
    Year(2022);
    Year(1999);
    Year(2019);
    Year(2020);
    Year(2000);
    return 0;
}