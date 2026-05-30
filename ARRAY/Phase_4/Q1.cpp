// Q. Compare two arrays and check whether they are equal(i.e., they contain the same elements in the same order).

#include <iostream>
#include <vector>

int main() {
    int x, y;

    std::cout << "Enter the size of array1: ";
    std::cin >> x;

    std::vector<int> arr1(x);

    std::cout << "Enter the elements of array1: ";
    for (int i = 0; i < x; i++) {
        std::cin >> arr1[i];
    }

    std::cout << "\nEnter the size of array2: ";
    std::cin >> y;

    std::vector<int> arr2(y);
    std::cout << "Enter the elements of array2: ";
    for (int i = 0; i < y; i++) {
        std::cin >> arr2[i];
    }
    bool comp = true;
    if (arr1.size() != arr2.size()) {
        comp = false;
    } 
    else {
        for (int i = 0; i < x; i++) {
            if (arr1[i] != arr2[i]) {
                comp = false;
                break;
            }
        }
    }
    if (comp) {
        std::cout << "\nArrays are equal." << std::endl;
    } 
    else {
        std::cout << "\nArrays are not equal." << std::endl;
    }

    return 0;
}
