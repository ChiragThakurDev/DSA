//Find the index of the maximum element
#include<iostream>
using namespace std;

int main(){
    int arr[]={2,4,6,8,10,42,24,76,1,43,67,23,100};
    int maxInd=arr[0];
    int maxIndex=0;
    int lengthArray=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<lengthArray;i++){
        if(maxInd<arr[i]){
            maxInd=arr[i];
            maxIndex=i;
        }
    }
    cout<<"The higher number of the array element is: "<<maxInd<<endl;
    cout<<"The higher number index of a element is: "<<maxIndex<<endl;
return 0;
}