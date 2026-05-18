//Count how many elements are positive, negative, or zero.
#include<iostream>
using namespace std;

int main(){
    int arr[]={-15,  42,   0,  -8,  99, 
          0, -23,  11, -64,   7, 
         88,   0,  -3,  55, -12, 
          0,  19, -45,  73,   0, 
        -91,  26,  -5,   0,  34, 
        -77,  61,  -1,  10, -50};
   int lengthArray=sizeof(arr)/sizeof(arr[0]);
   int positive=0;
   int negative=0;
   int zero=0;
   for(int i=0;i<lengthArray;i++){
       if(arr[i]>0){
           positive+=1;
       }
       else if(arr[i]<0){
           negative+=1;
       }
       else{
           zero+=1;
       }
   }
cout<<"The total Positive numbers are:"<<positive<<endl;
cout<<"The total Negative numbers are: "<<negative<<endl;
cout<<"The total Zero numbers are: "<<zero<<endl;
return 0;
}