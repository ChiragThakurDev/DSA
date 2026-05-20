//Find the first occurrence of a given number
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
    bool found = false;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            cout<<"The first occurrence of the value is exist: i.e the array element "<<arr[i]<<" is equal to the "<<x<<" and its index is "<<i<<endl;
            found = true;
            break; // Exit 
        }       
    }
    if(!found){
        cout<<"The value is not exist in the array of elements"<<endl;
    }
    return 0;
    }