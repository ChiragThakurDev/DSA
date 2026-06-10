//Find the sum of all elements except the largest and smallest.
#include<iostream>
#include<vector>
#include<climits>

int main(){
    int n;
    std::cout<<"Enter the size of an array: "<<std::endl;
    std::cin>>n;
    std::vector<int>arr(n);
    std::cout<<"Enter the elements of an array: "<<std::endl;
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    std::cout<<std::endl;
    int totalSum=0;
    int smallest=INT_MAX;
    int largest=INT_MIN;
    int sum;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
        if(arr[i]<smallest){
            smallest=arr[i];
        }
        totalSum+=arr[i];
    }
    sum=totalSum-largest-smallest;
    std::cout<<"The sum of all elements expect the largest and smallest element is :"<<std::endl;
    std::cout<<sum;
    std::cout<<std::endl;
    return 0;
}
