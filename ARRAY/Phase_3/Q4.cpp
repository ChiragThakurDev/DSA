//Replace all even numbers with 1 and all odd numbers with 0
#include<iostream>
#include<vector>

int main(){
int n;
std::cout<<"Enter the size of an array: "<<std::endl;
std::cin>>n;
std::vector<int>arr(n);
std::cout<<"Enter the elements of an array:"<<std::endl;
for(int i=0;i<n;i++){
std::cin>>arr[i];
    }
 std::cout<<std::endl;
 std::vector<int> modifyArr(n);
 std::cout<<"The modified version of new array is: "<<std::endl;
 for(int i=0;i<n;i++){
if(arr[i]%2==0){
   arr[i]=1;
   modifyArr[i]=arr[i];
    }
   else{
arr[i]=0;
modifyArr[i]=arr[i];
     
     }
     std::cout<<modifyArr[i]<<" ";
    }
    return 0;
    }

