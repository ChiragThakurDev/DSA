//Find the min Value in the array.
#include<iostream>
using namespace std;
int main(){
    int arr[]={37, 82, 14, 95, 61};
    int lengthArray=sizeof(arr)/sizeof(arr[0]);
    int min=arr[0];
    for(int i=0;i<lengthArray;i++){
        if(min>=arr[i]){
            min=arr[i];
        }
    }
    cout<<min<<endl;
    return 0;
}