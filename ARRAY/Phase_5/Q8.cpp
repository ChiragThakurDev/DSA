//Count how many elements are greater than the average of the array
#include<iostream>
#include<vector>

int main(){
  int n;
  std::cout<<"Enter the size of an array: "<<std::endl;
  std::cin>>n;
  std::vector<int> arr(n);
  std::cout<<"Enter the elements of an array: "<<std::endl;
  for(int i=0;i<n;i++){
      std::cin>>arr[i];
  }
  std::cout<<std::endl;
  
  int sum=0;
  int average;
  for(int i=0;i<n;i++){
    sum+=arr[i];
  }
  average=(sum/n);
  int count=0;
  for(int i=0;i<n;i++){
      if(arr[i]>average){
          count++;
      }
  }
  std::cout<<"The total elements which are greater than the average are:  "<<count;
  std::cout<<std::endl;
  return 0;

}
