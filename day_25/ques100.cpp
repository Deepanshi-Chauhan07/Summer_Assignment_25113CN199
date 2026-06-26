// to sort words by length
#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<string> words = {"apple", "banana", "kiwi", "grape", "orange"};
    
    sort(words.begin(), words.end(), [](const string& a, const string& b) {
        return a.length() < b.length();
    });
    
    cout << "Sorted words by length: ";
    for (const string& word : words) {
        cout << word << " ";
    }
    cout << endl;
    
    return 0;
}