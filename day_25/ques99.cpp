// to sort names alphabetically
#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<string> names = {"John", "Alice", "Bob", "Charlie"};
    
    sort(names.begin(), names.end());
    
    cout << "Sorted names: ";
    for (const string& name : names) {
        cout << name << " ";
    }
    cout << endl;
    
    return 0;
}