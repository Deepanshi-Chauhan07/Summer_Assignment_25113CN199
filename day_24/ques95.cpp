// to find longest word.
#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    stringstream ss(str);
    string word;
    string longestWord = "";
    while (ss >> word) {
        if (word.length() > longestWord.length()) {
            longestWord = word;
        }
    }
    cout << "The longest word is: " << longestWord << endl;
    return 0;
}