//Copy the one array to another manualy
#include<iostream>
#include<vector>

int main(){
    int n;
    std::cout<<"Enter the size of the array: "<<std::endl;
    std::cin>>n;
    std::vector<int>arr(n);
    std::cout<<"Enter the elements of an array: "<<std::endl;
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    std::cout<<std::endl;
    std::vector<int> arr2=arr;
    std::vector<int> arr3;
    std::cout<<"The copy array of a original array: "<<std::endl;
    for(int i=0;i<n;i++){
        std::cout<<arr2[i]<<" ";
    }
    std::cout<<std::endl;

    std::cout<<"THe copy of the array: "<<std::endl;
    for(int i=0;i<n;i++){
        arr3.push_back(arr[i]);
    }

    for(int i=0;i<n;i++){
    std::cout<<arr3[i]<<" ";
    }
    std::cout<<std::endl;
return 0;
}
