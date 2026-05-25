//Reverse the array without using the in-built reverse function.
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

int n=arr.size();
std::cout<<"The reverse of an array is: "<<std::endl;
for(int i=n-1;i>=0;i--){
std::cout<<arr[i]<<" ";
}  
std::cout<<std::endl;
return 0;
    }


// // --- ACTUAL IN-PLACE REVERSAL ---
//     // Swap elements from both ends moving towards the center
//     for (int i = 0; i < n / 2; i++) {
//         // Swap arr[i] and arr[n - 1 - i]
//         int temp = arr[i];
//         arr[i] = arr[n - 1 - i];
//         arr[n - 1 - i] = temp;
//     }

//_____________________________Alternative approach using an reversed array_____________________________//
//Reverse the array without using the in-built reverse function.
// #include<iostream>
// #include<vector>

// int main(){
// int num;
// std::cout<<"Enter the size of an array: "<<std::endl;
// std::cin>>num;
// std::vector<int> arr(num);
// std::cout<<"Enter the elements of an array: "<<std::endl;
// for(int i=0;i<num;i++){
// std::cin>>arr[i];
//     }
// std::cout<<std::endl;
// std::vector<int>arr2(num);
// int n=arr2.size();
// std::cout<<"The reverse of an array is: "<<std::endl;
// for(int i=n-1;i>=0;i--){
//     arr2.push_back(arr[i]);
// std::cout<<arr[i]<<" ";
// }  
// std::cout<<std::endl;
// return 0;
//     }

