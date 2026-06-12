#include <iostream>
using namespace std;

// Function to find the sum of two numbers
int findSum(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    int sum = findSum(a, b);

    cout << "The sum of " << a << " and " << b << " is: " << sum << endl;

    return 0;
}