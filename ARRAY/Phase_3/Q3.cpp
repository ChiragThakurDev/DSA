//Create a new array containing only even numbers from the given array
#include<iostream>
#include<vector>

int main(){
    int n;
    std::cout<<"Enter the total size of array: "<<std::endl;
    std::cin>>n;
    std::vector<int>arr(n);
    std::cout<<"Enter the elements of array: "<<std::endl;
    for(int i=0;i<n;i++){
        std::cin>>arr[i];

    }
    std::cout<<std::endl;
    std::vector<int> arrPositive(n);
    std::cout<<"The positive array of a given array elements are: "<<std::endl;
    for(int i=0 ;i<n;i++){
        if(arr[i]<0){
            arr[i]=0;
            arrPositive[i]=arr[i];
        }
    else{
                arrPositive[i]=arr[i];
 }
 std::cout<<arrPositive[i]<<" ";
    }
return 0;
}