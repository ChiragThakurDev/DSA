//Find the sum of array elements.
#include<iostream>
using namespace std;

int main(){
    int arr[]={10,20,30,40,50};
    int lengthArray=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    for(int i=0;i<lengthArray;i++){
              sum+=arr[i]; 
    }
    cout<<sum<<endl;
    return 0;
}
