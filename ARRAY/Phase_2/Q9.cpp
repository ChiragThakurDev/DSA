//Count how many numbers are divisible by 3 and 5 both.
#include<iostream>
#include<vector>

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
      if(arr[i]%3==0 && arr[i]%5==0){
          cout<<"The element of array which are divisible by 3 and 5 are: "<<arr[i]<<endl;
       count++;
          }
      }
      cout<<"The total elements of an array whicha are divisible by both 3 and 5 are: "<<count<<endl;
      return 0;
    }
