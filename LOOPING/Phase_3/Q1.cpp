//Print the squares of numbers from 1 to n.
#include <iostream>
using namespace std;
void check(int n){
if(n<0){
cout<<"Invalid Input"<<endl;
return ;
}
for(int i=0;i<=n;i++){
cout<<"The square of a "<<i<<" is "<<(i*i)<<endl;
}
cout<<" "<<endl;
}
int main(){
check(10);
check(100);
check(-23);
check(0);
return 0;

}
