// to remove duplicates from a string.
#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    string result = "";
    for (char c : str) {
        if (result.find(c) == string::npos) {
            result += c;
        }
    }
    cout << "String after removing duplicates: " << result << endl;
    return 0;
}