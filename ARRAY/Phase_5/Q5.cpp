//Find the difference between the largest and smallest element.
#include<iostream>
#include<vector>
#include<climits>

int main(){
    int n;
    std::cout<<"Enter the size of an array: "<<std::endl;
    std::cin>>n;
    std::vector<int> arr(n);
    std::cout<<"Enter the elements of an array: "<<std::endl;
    for(int i=0 ;i<n;i++){
        std::cin>>arr[i];
    }
    int smallest=INT_MAX;
    int largest=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
        if(arr[i]<smallest){
            smallest=arr[i];
        }

    }
    int difference=largest-smallest;
    std::cout<<"The difference btw Largest and smallest value is :"<<std::endl;
    std::cout<<difference;
    std::cout<<std::endl;
    return 0;
}
