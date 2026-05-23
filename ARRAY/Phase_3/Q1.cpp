//Create a new array containing squares of all numbers
#include<iostream>
#include<vector>
int main(){
int n;
std::cout<<"Enter the total range of the array: "<<std::endl;
std::cin>>n;
std::vector<int> arr(n);
std::cout<<"Enter the elemnts of array: "<<std::endl;
for(int i=0;i<n;i++){
std::cin>>arr[i];
    }
std::cout<<std::endl;
std::vector<int> squareArr(n);
std::cout<<"The square array of a given array elements are: "<<std::endl;
for(int i=0;i<n;i++){
   squareArr[i]=arr[i]*arr[i];
    
 std::cout<<squareArr[i]<<" ";
 }
 return 0;
    }
