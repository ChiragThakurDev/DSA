//Take two dates (day and month) and determine which one comes first in the calendarn~
#include<iostream>
using namespace std;

void date(int d_1,int m_1,int d_2,int m_2){

    if(d_1 < 1 || d_1 > 31 || d_2 < 1 || d_2 > 31 || m_1 < 1 || m_1 > 12 || m_2 < 1 || m_2 > 12){
        cout<<"Invalid data"<<endl;
        return;
    }

    if(m_1 < m_2){
        cout<<"First date comes first"<<endl;
    }
    else if(m_1 > m_2){
        cout<<"Second date comes first"<<endl;
    }
    else{
        if(d_1 < d_2){
            cout<<"First date comes first"<<endl;
        }
        else if(d_1 > d_2){
            cout<<"Second date comes first"<<endl;
        }
        else{
            cout<<"Both dates are same"<<endl;
        }
    }
}

int main(){
    date(12,12,12,12);
    date(1,4,21,4);
    date(8,2,12,2);
    date(10,4,2,4);
    return 0;
}