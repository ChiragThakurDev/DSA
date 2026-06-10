//Find the second smallest element of the array
#include<iostream>
#include<vector>
#include<climits>

int main(){
    int n;
    std::cout<<"Enter the size of an array: "<<std::endl;
    std::cin>>n;
    std::vector<int> arr(n);
    std::cout<<"Enter the elements of an array: "<<std::endl;
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    std::cout<<std::endl;
    int smallest=INT_MAX;
    int secondSmallest=INT_MAX;
    std::cout<<"The second smallest element of an array: "<<std::endl;
    for(int i=0;i<n;i++){
        if(arr[i]<smallest){
            secondSmallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i]<secondSmallest && arr[i]!=smallest)
        {
            secondSmallest=arr[i];
        }
    }
    std::cout<<secondSmallest;
    std::cout<<std::endl;
    return 0;
}
