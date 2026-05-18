//Find the average of array elements.
#include<iostream>
using namespace std;

int main(){
    int arr[]={10,20,30,40,50};
    int lengthArray=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    double avg;
    for(int i=0;i<lengthArray;i++){
              sum+=arr[i]; 
    }
     avg=sum/lengthArray;
    cout<<sum<<endl;
    cout<<avg<<endl;
      
    return 0;
}
