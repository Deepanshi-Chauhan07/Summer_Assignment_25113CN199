#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    
    int a = 0; // 0th term
    int b = 1; // 1st term
    int next;
    
    for (int i = 2; i <= n; i++) {
        next = a + b;
        a = b;
        b = next;
    }
    return b;
}

int main() {
    int n;
    cout << "Enter term number: ";
    cin >> n;
    
    cout << n << "th Fibonacci number is: " << fibonacci(n);
    return 0;
}