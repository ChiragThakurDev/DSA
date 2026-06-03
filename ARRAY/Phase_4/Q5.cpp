//Find the elments that are in the one array but not in the another array.
#include<iostream>
#include<vector>

int main(){
    int x,y;
    std::cout<<"Enter the size of the array1: "<<std::endl;
    std::cin>>x;
    std::vector<int> arr1(x);
    std::cout<<"Enter the elements of array1: "<<std::endl;
    for(int i=0;i<x;i++){
        std::cin>>arr1[i];
    }
     std::cout<<std::endl;
     std::cout<<"Enter the size of the array2: "<<std::endl;
     std::cin>>y;
     std::vector<int> arr2(y);
     std::cout<<"Enter the elements of array2: "<<std::endl;
     for(int i=0;i<y;i++){
         std::cin>>arr2[i];
     }
     bool found=false;
     std::cout<<std::endl;
     std::cout<<"Elements that are not in the another array are: "<<std::endl;
     for(int i=0;i<x;i++){
         found=false;
         for(int j=0;j<y;j++){
             if(arr1[i]==arr2[j]){
                 found=true;
                 break;
             }
         }
         if(!found){
             std::cout<<arr1[i]<<" ";
         }
     }
     std::cout<<std::endl;
     return 0;
}

