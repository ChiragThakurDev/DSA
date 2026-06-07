//Check if the array is sorted in descending order.
#include<iostream>
#include<vector>

int main(){
    int n;
    std::cout<<"Enter the size of array: "<<std::endl;
    std::cin>>n;
    std::vector<int> arr(n);
    std::cout<<"Enter the elements of an array: "<<std::endl;
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    std::cout<<std::endl;
    bool sorted=true;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            sorted=false;
            break;
        }
    }
    if(sorted){
        std::cout<<"The array is in descending order."<<std::endl;
    }
    else{
        std::cout<<"The array is not in descending order."<<std::endl;
    }
    if(!sorted){
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if(arr[j]<arr[j+1]){
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
    }
    std::cout<<"Sorted array: ";
    for(int i=0;i<n;i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
    return 0;

}
