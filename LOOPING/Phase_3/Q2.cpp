//Print the cubes of numbers from 1 to n.
#include <iostream>
using namespace std;
void check(int n){
if(n<0){
cout<<"Invalid Input"<<endl;
}
for(int i=1;i<=n;i++){
cout<<"The cube of a "<<i<<" is "<<(i*i*i)<<endl;
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
