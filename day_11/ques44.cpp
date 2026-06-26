#include <iostream>
using namespace std;
// Function to calculate factorial using a loop
unsigned long long Factorial(int n) {
    if (n < 0) {
        return 0; 
    }
    
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    if (num < 0) {
        cout << "Error: Factorial of a negative number does not exist." << endl;
    } else {
        unsigned long long fact = Factorial(num);
        cout << "Factorial of " << num << " = " << fact << endl;
    }

    return 0;
}