//Create a new array containing only even numbers from the given array
#include<iostream>
#include<vector>

int main(){
    int n;
    std::cout<<"Enter the total range of the array:"<<std::endl;
    std::cin>>n;
    std::vector<int>arr(n);
    std::cout<<"Enter the elements of array: "<<std::endl;
    for(int i=0;i<n;i++){
        std::cin>>arr[i];

    }
    std::cout<<std::endl;
    std::vector<int> evenArr;
    std::cout<<"The even array of a given array elements are: "<<std::endl;
    for(int i=0 ;i<n;i++){
        if(arr[i]%2==0){
            evenArr.push_back(arr[i]);
            std::cout<<arr[i]<<" ";

        }

    }
    return 0;
}