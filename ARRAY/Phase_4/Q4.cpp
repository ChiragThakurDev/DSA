//Find the common elements btw two arrays.
#include<iostream>
#include<vector>

int main(){
    int x,y;
    std::cout<<"Enter the size of an array: "<<std::endl;
    std::cin>>x;
    std::vector<int> arr1(x);
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
    std::cout<<std::endl;
    std::cout<<"The common elements btw two arrays are: "<<std::endl;
    for(int i=0 ;i<x;i++){
  
        for(int j=0;j<y;j++){
            if(arr1[i]==arr2[j]){
                std::cout<<arr1[i]<<" is common elements of give two arrays: "<<std::endl;
            break;
            }
        
    }}
    std::cout<<std::endl;
    return 0;

}
