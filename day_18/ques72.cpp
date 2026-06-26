#include <iostream>
using namespace std;
int main() {
    // The array must be sorted in ascending order for binary search to work
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = sizeof(arr) / sizeof(arr[0]); 
    
    int target;
    cout << "Enter the number you want to search for: ";
    cin >> target;
    int low = 0;
    int high = n - 1;
    int foundIndex = -1; 

    while (low <= high) {
        int mid = low + (high - low) / 2; 

        if (arr[mid] == target) {
            foundIndex = mid;
            break; 
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (foundIndex != -1) {
        cout << "Element found at array index: " << foundIndex << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}