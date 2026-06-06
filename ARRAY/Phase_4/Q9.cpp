#include<iostream>
#include<vector>

int main() {
    int n;

    std::cout << "Enter the size of array: ";
    std::cin >> n;

    std::vector<int> arr(n);

    std::cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int maxVal = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }

    std::vector<int> freq(maxVal + 1, 0);

    // Count frequencies
    for(int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    // Print frequencies
    for(int i = 0; i <= maxVal; i++) {
        if(freq[i] > 0) {
            std::cout << "Frequency of " << arr[i]
                      << " = " << freq[i] << std::endl;
        }
    }

    return 0;
}
