
#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int arr[] = {0, 0, 1, 1, 1, 2, 2, 2, 2, 2};

    if (n == 0) return 0;

    // 'i' keeps track of the position of the last unique element found
    int i = 0; 
    for (int j = 1; j < n; j++) {
        
        if (arr[j] != arr[i]) {
            i++;           
            arr[i] = arr[j]; 
        }
    }

    // New size of the array is i + 1
    int newSize = i + 1;

    cout << "Array after removing duplicates:" << endl;
    for (int k = 0; k < newSize; k++) {
        cout << arr[k] << endl;
    }

    return 0;
}