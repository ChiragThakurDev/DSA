//Find the sum of even elements only.
#include<iostream>
#include<vector>

using namespace std;
int main(){
    int n;
    int sum=0; 
    cout<<"Enter the n value for the array: "<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements for array: "<<endl;
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            sum+=arr[i];
        }
    }
    cout<<"The sum of even elements of array is: "<<sum<<endl;
    return 0;
}