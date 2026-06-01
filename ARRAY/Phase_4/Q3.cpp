//Merge two arrays in the new array 
#include<iostream>
#include<vector>

int main(){
    int x,y;
    std::cout<<"Enter the size of array1: "<<std::endl;
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
    std::cout<<"Enter the elments of array2: "<<std::endl;
    for(int i=0;i<y;i++){
        std::cin>>arr2[i];
    }
    std::cout<<std::endl;
    std::vector<int> mergeArr(x+y);
    for(int i=0;i<x;i++){
        mergeArr[i]=arr1[i];
    }
    std::cout<<std::endl;
    for(int i=0;i<y;i++){
        mergeArr[x+i]=arr2[i];
    }
    std::cout<<std::endl;
    std::cout<<"The merged array of two arrays: "<<std::endl;
    for(int i=0;i<x+y;i++){
        std::cout<<mergeArr[i]<<" ";
    }
    std::cout<<std::endl;
    return 0;
    
}
