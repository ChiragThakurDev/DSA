//Count how many times a number appears in an array
#include<iostream>
#include<vector>
using namespace std;
int main(){
 int n;
 int x;
 cout<<"Enter the total numbers of the array: "<<endl;
 cin>>n;
 cout<<endl;
 vector<int>arr(n);
 cout<<"Enter the elements of the array: "<<endl;
 for(int i=0;i<n;i++){
     cin>>arr[i];
 }
 cout<<endl;
 cout<<"Enter the value of the x: "<<endl;
 cin>>x;
 int count = 0; // Initialize count to 0
 for(int i=0;i<n;i++){
    if(arr[i]==x){
        count++; // Increment count if x is found
    }       
 }
 cout<<"The value "<<x<<" appears "<<count<<" times in the array."<<endl;
 return 0;
}