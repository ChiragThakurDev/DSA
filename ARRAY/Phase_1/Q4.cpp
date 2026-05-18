//Find the max Value in the array.
#include<iostream>
using namespace std;
int main(){
    int arr[]={37, 82, 14, 95, 61};
    int lengthArray=sizeof(arr)/sizeof(arr[0]);
    int max=arr[0];
    for(int i=0;i<lengthArray;i++){
        if(max<=arr[i]){
            max=arr[i];
        }
    }
    cout<<max<<endl;
    return 0;
}