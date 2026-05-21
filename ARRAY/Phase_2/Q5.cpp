//Check if all elements in an array are unique.
#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cout << "Enter the total numbers of the array: " << endl;
    cin >> n;
    cout << endl;
    
    vector<int> arr(n);
    cout << "Enter the elements of the array: " << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << endl;
    
    bool isUnique = true; 
    
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] == arr[j]){
                isUnique = false; 
                cout << "Duplicate found: " << arr[i] << " at positions " << i << " and " << j << endl;
          
            }
        }
    }
    cout << endl;
    if(isUnique) {
        cout << "All elements in the array are unique." << endl;
    } else {
        cout << "The array contains duplicate elements." << endl;
    }
    
    return 0;
}