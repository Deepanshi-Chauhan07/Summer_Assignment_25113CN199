#include <iostream>
#include <cmath>
using namespace std;

bool isPerfect(int num) {
    if (num <= 1) return false;
    
    int sum = 1; 
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            sum += i;
        
            if (i != num / i) {
                sum += num / i;
            }
        }
    }
    
    return sum == num;
}

int main() {
    int n ;
    cout<<"enter the number:";
    cin >> n;
    cout << (isPerfect(n)? "Perfect" : "Not Perfect");
    return 0;
}