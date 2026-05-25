//Swap the first and last elements of the array.
#include<iostream>
#include<vector>

int main(){
int num;
std::cout<<"Enter the size of an array: "<<std::endl;
std::cin>>num;
std::vector<int> arr(num);
std::cout<<"Enter the elements of an array: "<<std::endl;
for(int i=0;i<num;i++){
std::cin>>arr[i];
    }
std::cout<<std::endl;
std::vector<int>arr2=arr;
int n=arr2.size();
std::cout<<"Now swap the first element with the last one: "<<std::endl;
int temp;
if(n>1){
temp=arr2[0];
arr2[0]=arr2[n-1];
arr2[n-1]=temp;
}
for(int i=0; i<num;i++){
std::cout<<arr2[i]<<" ";
}

  
std::cout<<std::endl;
return 0;
    }

