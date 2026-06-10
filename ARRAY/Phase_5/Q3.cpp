//Find the second largest element in an array
#include<iostream>
#include<vector>
#include<climits>
int main(){
    int n;
    std::cout<<"Enter the size of the array: "<<std::endl;
    std::cin>>n;
    std::vector<int>arr(n);
    std::cout<<"Enter the elements of an array: "<<std::endl;
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    int largest=INT_MIN;
    int secondLargest=INT_MIN;
    std::cout<<std::endl;
    std::cout<<"find the second largest element here: "<<std::endl;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            secondLargest=largest;
            largest=arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest){
            secondLargest = arr[i];
        }
    }
    std::cout<<secondLargest;

    std::cout<<std::endl;
    return 0;
}
