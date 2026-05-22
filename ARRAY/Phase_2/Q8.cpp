//Find the count of prime numbers in the array.
#include<iostream>
#include<vector>
using namespace std;

bool checkPrime(int num){
    if(num<=1) return false;
    if(num==2) return true;
    if(num%2==0) return false;

    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            return false;
            }
            }
            return true;
    }
int main(){
int n;
int count=0;
cout<<"Enter the total number range of array: "<<endl;
cin>>n;
vector<int>arr(n);
cout<<"Enter the elements of the array: "<<endl;
for(int i= 0;i<n;i++){
    cin>>arr[i];
    }
 cout<<endl;
for(int i=0;i<n;i++){
if(checkPrime(arr[i])){
  cout<<"The element of array: "<<arr[i]<<" is a prime number "<<endl;
  count++;
    }
  }
cout<<"The total prime numbers in the array: "<<count<<endl;
    return 0;
    }
