// to compress a string
#include <iostream>
#include <string>

using namespace std;

int main() {
    string text;
    cout << "Enter a string to compress: ";
    getline(cin, text);
    if (text.empty()) {
        cout << "Compressed string: " << endl;
        return 0;
    }

    string compressed = "";
    int length = text.length();
    for (int i = 0; i < length; i++) {
        int count = 1;

        while (i < length - 1 && text[i] == text[i + 1]) {
            count++;
            i++;
        }

        compressed += text[i] + to_string(count);
    }

    cout << "Compressed string: " << compressed << endl;

    return 0;
}