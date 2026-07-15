#include<iostream>

class LinearSearch{
    public:
        int linearSearch(int arr[],int size,int target){
            for(int i=0;i<size;i++){
                if(arr[i]==target)
                {
                    return i;
                }
            }
            return -1;
        }
};

int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target=8;
    LinearSearch ls;
    int result=ls.linearSearch(arr,size,target);
    if(result==-1){
        std::cout<<"The Element is not found"<<std::endl;
    }
    else{
        std::cout<<"The Element is found"<<std::endl;
    }
    return 0;
}
