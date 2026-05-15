 //Input n and take n as interger as array and print them
#include<iostream>
#include<vector>
using namespace std;

void check(int n){
    if(n<=0)return;
    vector<int> arr(n);
    cout << "Please enter " << n << " integers: " << endl;
    for(int i=0;i<n;i++){
           cin>>arr[i];
    }
    cout << "Your array elements are: " << endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";    
    }
    cout<<endl;
}
int main(){
    check(10);
    return 0;
}