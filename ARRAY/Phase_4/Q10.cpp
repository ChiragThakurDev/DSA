// Question:
// Given an array of integers, print all elements that appear more than once.
// Each duplicate element should be printed only once, even if it occurs
// multiple times in the array.
//
// Example:
// Input:
// 6
// 1 2 1 3 2 1
//
// Output:
// 1 2

#include<iostream>
#include<vector>

int main(){
    int n;

    std::cout << "Enter the size of array: ";
    std::cin >> n;

    std::vector<int> arr(n);

    std::cout << "Enter the elements of array: ";
    for(int i = 0; i < n; i++){
        std::cin >> arr[i];
    }

    std::vector<int> arr2;

    std::cout << "The elements that appear more than once: ";

    for(int i = 0; i < n - 1; i++){

        for(int j = i + 1; j < n; j++){

            if(arr[i] == arr[j]){

                bool alreadyPresent = false;

                for(int k = 0; k < arr2.size(); k++){
                    if(arr2[k] == arr[i]){
                        alreadyPresent = true;
                        break;
                    }
                }

                if(!alreadyPresent){
                    arr2.push_back(arr[i]);
                }

                break;
            }
        }
    }

    for(int i = 0; i < arr2.size(); i++){
        std::cout << arr2[i] << " ";
    }

    std::cout << std::endl;
    return 0;
}
