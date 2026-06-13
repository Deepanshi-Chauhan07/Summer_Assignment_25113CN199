#include <iostream>
using namespace std;

bool isPalindrome(int num) {
    int original = num;
    int reversed = 0;

    // Negative number palindrome nahi hota
    if (num < 0) return false;

    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }

    return original == reversed;
}

int main() {
    int n ;
    cout<<"enter the number:";
    cin >> n;
    if (isPalindrome(n)) {
        cout << n << " is a palindrome";
    } else {
        cout << n << " is not a palindrome";
    }
    return 0;
}