//Print a pattern where each row i prints i*i.
#include<iostream>
using namespace std;
void check(int num){
    if(num<0){
   cout<<"Invalid Input"<<endl;
    return ;
    }
    
    for(int i=1;i<=num;i++){
            int square=i*i;
            for(int j=1;j<=i;j++){
                cout<<square<<" ";
            }
      cout<<" "<<endl;
    }
    cout<<endl;
}

int main(){
    check(10);
    check(-5);
    check(0);
    check(1);
    check(5);
    return 0;
}