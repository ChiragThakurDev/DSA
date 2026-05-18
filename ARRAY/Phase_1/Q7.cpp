// Count how many elements are even and odd.
#include<iostream>
using namespace std;
int main(){
    int arr[]={10, 15, 20, 25, 30, 35, 40};
    int lengthArray=sizeof(arr)/sizeof(arr[0]);
    int even=0;
    int odd=0;
    for(int i=0;i<lengthArray;i++){
        if(arr[i]%2==0){
            even+=1;
        }
        else{
            odd+=1;
        }
    }
cout<<"The total Even numbers are: "<<even<<endl;
cout<<"The total Odd numbers are: "<<odd<<endl;
return 0;
}
