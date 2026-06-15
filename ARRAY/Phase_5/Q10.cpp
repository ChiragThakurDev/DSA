//Print all unique elements (those that occur exactly once)
#include<iostream>
#include<vector>

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
   std::cout<<"The Unique elements:"<<std::endl;
   for(int i=0;i<n;i++){
       int count=0;
       for(int j=0;j<n;j++)
       {
         if(arr[i]==arr[j]){
           count++;
         }
       }
       if(count==1){
           std::cout<<arr[i]<<" ";
       }
   }
   std::cout<<std::endl;
   return 0;
}
