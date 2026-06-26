//to find common characters in a string
#include <bits/stdc++.h>
using namespace std;
int main() {
    string str1 = "hello";
    string str2 = "world";
    
    unordered_set<char> set1(str1.begin(), str1.end());
    unordered_set<char> set2(str2.begin(), str2.end());
    
    cout << "Common characters: ";
    for (char c : set1) {
        if (set2.find(c) != set2.end()) {
            cout << c << " ";
        }
    }
    cout << endl;
    
    return 0;
}