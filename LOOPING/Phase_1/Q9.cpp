//Print the factorial of a given number.
#include <iostream>
using namespace std;
void factorial(int n){
    if(n<0) return ;
    int result=1;
    for(int i=2;i<n;i++){
        result *=i;
    }
    cout<<"Factorial of "<<n<<" is: "<<result<<endl;
}
int main(){
    factorial(-5);
    factorial(0);
    factorial(1);
    factorial(5);
    factorial(10);
    return 0;
}