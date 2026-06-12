#include <iostream>
using namespace std;
// Function definition to find the maximum of two numbers
int findMaximum(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int maxResult = findMaximum(a, b);

    cout << "The maximum number is: " << maxResult << endl;

    return 0;
}