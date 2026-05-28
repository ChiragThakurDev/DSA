//Swap alternate elements(1st<->2nd,3rd<->4th,etc).
#include<iostream>
#include<vector>

int main(){
int n;
std::cout<<"Enter the size of the array: "<<std::endl;
std::cin>>n;
std::vector<int> arr(n);
std::cout<<"Enter the elements of an array"<<std::endl;
for(int i=0;i<n;i++){
   std::cin>>arr[i];
}
std::cout<<std::endl;
for(int i=0;i<n-1;i+=2){
     int temp=arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=temp;
}
std::cout<<"The swap of alternate: "<<std::endl;
for(int i=0;i<n;i++){
    std::cout<<arr[i]<<" "; 
}
return 0;
}

