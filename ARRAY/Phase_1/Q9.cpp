//Find the index of the maximum element
#include<iostream>
using namespace std;

int main(){
    int arr[]={2,4,6,8,10,42,1,24,76,43,67,23};
    int minInd=arr[0];
    int minIndex=0;
    int lengthArray=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<lengthArray;i++){
        if(minInd>arr[i]){
            minInd=arr[i];
            minIndex=i;
        }
    }
    cout<<"The smallest number of the array element is: "<<minInd<<endl;
    cout<<"The smallest number index of a element is: "<<minIndex<<endl;
return 0;
}