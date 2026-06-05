//Find the element-wise sum of two arrays (A[i]+B[i])
#include<iostream>
#include<vector>

int main(){
    int x,y;
    std::cout<<"Enter the size of array1: "<<std::endl;
    std::cin>>x;
    std::vector<int>arr1(x);
    std::cout<<"Enter the elements of array1: "<<std::endl;
    for(int i=0;i<x;i++){
        std::cin>>arr1[i];
    }
    std::cout<<std::endl;
    std::cout<<"Enter the size of array2: "<<std::endl;
    std::cin>>y;
    std::vector<int> arr2(y);
    std::cout<<"Enter the elements of array2: "<<std::endl;
    for(int i=0;i<y;i++){
        std::cin>>arr2[i];
    }
    std::cout<<std::endl;       //int n=std::max(x,y)for geting both sizes
    std::vector<int> arr3=arr1; //for different size then std::vector<int> arr3;
    std::cout<<"The element wise sum of two arrays: "<<std::endl;
    for(int i=0;i<x;i++) //for(int i=0;i<n;i++) for the different sizes   
    { 
     arr3[i]=arr1[i]+arr2[i]; //arr3.push_back(arr1[i]+arr2[i]);
    std::cout<<arr3[i]<<" ";
    }
    std::cout<<std::endl;
    return 0;
}

//Logic for the differnet sizes of the array i have mentioned here 
//in the comments with the help of this user is able to get the 
//different sizes of array two for sum wise elements    
