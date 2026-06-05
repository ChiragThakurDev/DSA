//Count how many elements are common btw two arrays
#include<iostream>
#include<vector>

int main(){
 int x,y;
 int count=0;
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
 std::cout<<"Enter the elements of array2: "<<std::endl;
 for(int i=0;i<y;i++){
 std::cin>>arr2[i];
 }
 std::cout<<std::endl;
 for(int i=0;i<x;i++){
     for(int j=0;j<y;j++){
         if(arr1[i]==arr2[j]){
             count++;
             break;
         }
     }
 }
 std::cout<<"The count of common elements of two arrays is: "<<count<<std::endl;
 return 0;
}
