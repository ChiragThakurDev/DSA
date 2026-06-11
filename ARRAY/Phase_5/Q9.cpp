// Print the frequency of each distinct element.
#include<iostream>
#include<vector>

int main(){
    int n;

    std::cout << "Enter the size of array: " << std::endl;
    std::cin >> n;

    std::vector<int> arr(n);

    std::cout << "Enter the elements of an array: " << std::endl;
    for(int i = 0; i < n; i++){
        std::cin >> arr[i];
    }

    std::cout << "\nFrequency of each distinct element:\n";

    for(int i = 0; i < n; i++){

        bool found = false;

        // Check if this element has already been counted
        for(int j = 0; j < i; j++){
            if(arr[i] == arr[j]){
                found = true;
                break;
            }
        }

        if(found){
            continue;
        }

        int count = 0;

        // Count frequency
        for(int j = 0; j < n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }

        std::cout << arr[i] << " -> " << count << std::endl;
    }

    return 0;
}
