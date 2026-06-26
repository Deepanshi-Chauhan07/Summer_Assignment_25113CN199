#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num) {
    if (num < 0) return false; // Negative not considered
    
    int original = num;
    int sum = 0;
    int digits = 0;
    
    int temp = num;
    while (temp > 0) {
        digits++;
        temp = temp / 10;
    }
    
    temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum = sum + pow(digit, digits);
        temp = temp / 10;
    }
    
    return sum == original;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    if (isArmstrong(n)) {
        cout << n << " is an Armstrong number";
    } else {
        cout << n << " is not an Armstrong number";
    }
    
    return 0;
}