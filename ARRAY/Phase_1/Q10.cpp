// Take n elements and print only those greater than a given value k.
#include<iostream>
#include<vector>
using namespace std;

int main(){
int n,k;
cout<<"Enter the number of elements: ";
cin>>n;
cout<<endl;
cout<<"Enter the value of k: ";
cin>>k;
cout<<endl;

vector<int>arr(n);
cout<<"Enter the elements: "<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<endl;
cout<<"The elements greater than "<<k<<" are: ";
for(int i=0;i<n;i++){
    if(arr[i]>k){
        cout<<arr[i]<<" ";
       } 
}
    return 0;
}