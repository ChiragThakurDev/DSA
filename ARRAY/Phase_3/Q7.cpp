// rotate an array to the left by one position.

#include <iostream>
#include <vector>
using namespace std;

// Function to rotate array left by one position
void leftRotate(vector<int>& arr) {
    if (arr.empty()) return;

    int first = arr[0];
       
    for (int i = 0; i < arr.size() - 1; i++) {
        arr[i] = arr[i + 1];
    }

    arr[arr.size() - 1] = first;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};

    leftRotate(arr);

    cout << "Array after left rotation: ";
    for (int num : arr) {
        cout << num << " ";
    }

    return 0;
}
