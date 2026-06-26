#include <iostream>
using namespace std;
// Function to check if a number is prime
bool isPrime(int n) {
   
    if (n <= 1) {
        return false;
    }
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false; // Found a factor, so it is not prime
        }
    }
    
    return true; 
}

int main() {
    int number;
    
    cout << "Enter a positive integer: ";
    cin >> number;
    
    if (isPrime(number)) {
        cout << number << " is a prime number.\n";
    } else {
        cout << number << " is not a prime number.\n";
    }
    
    return 0;
}