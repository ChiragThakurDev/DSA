//Count how many pairs of elements have a sum equal to a given number k.
#include<iostream>
#include<vector>

int main() {
    int n, k;

    std::cout << "Enter the size of an array: " << std::endl;
    std::cin >> n;

    std::vector<int> arr(n);

    std::cout << "Enter the number of k: " << std::endl;
    std::cin >> k;

    std::cout << "Enter the elements of an array: " << std::endl;

    for(int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int count = 0;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {

            if(arr[i] + arr[j] == k) {
                count++;
            }

        }
    }

    std::cout << "The total number of pairs equal to k is: " << count << std::endl;

    return 0;
}
