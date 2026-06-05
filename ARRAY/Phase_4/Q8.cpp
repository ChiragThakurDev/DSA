//Find the element-wise product of two arrays
#include <iostream>
#include <vector>


int main() {
    int x, y;

    std::cout << "Enter the size of array1: ";
    std::cin >> x;

    std::vector<int> arr1(x);

    std::cout << "Enter the elements of array1:\n";
    for (int i = 0; i < x; i++) {
        std::cin >> arr1[i];
    }

    std::cout << "Enter the size of array2: ";
    std::cin >> y;

    std::vector<int> arr2(y);

    std::cout << "Enter the elements of array2:\n";
    for (int i = 0; i < y; i++) {
        std::cin >> arr2[i];
    }

    int n = std::max(x, y);

    std::vector<int> arr3;

    std::cout << "Element-wise product:\n";

    for (int i = 0; i < n; i++) {
        int a = (i < x) ? arr1[i] : 0;
        int b = (i < y) ? arr2[i] : 0;

        arr3.push_back(a * b);
        std::cout << arr3[i] << " ";
    }

    return 0;
}
