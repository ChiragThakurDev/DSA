//Count how many numbers the perfect square .
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(){
int n;
int count=0;
cout<<"Enter the total size of array: "<<endl;
cin>>n;
vector<int>arr(n);
cout<<"Enter the element of array: "<<endl;
for(int i=0;i<n;i++){
 cin>>arr[i];
    }
    cout<<endl;

  for(int i=0;i<n;i++){
      if (arr[i]>= 0) {
            int root = sqrt(arr[i]);
      if(root*root==arr[i]){
          cout<<"The element of array is a perfect sqaure: "<<arr[i]<<endl;
       count++;
          }
      }
    }
     cout<<"The total elements of an array which are perfect square is: "<<count<<endl;
      return 0;
}
