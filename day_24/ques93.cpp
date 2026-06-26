#include<iostream>
#include<string>

using namespace std;

int main() {
    string str1, str2;
    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;
    if (str1.length() != str2.length()) {
        cout << "The strings are NOT rotations of each other." << endl;
        return 0;
    }

    string concatenated = str1 + str1;
    int lenConcat = concatenated.length();
    int lenSub = str2.length();
    bool isRotation = false;

    for (int i = 0; i <= lenConcat - lenSub; i++) {
        int j;
        // Check if str2 matches a slice of the concatenated string
        for (j = 0; j < lenSub; j++) {
            if (concatenated[i + j] != str2[j]) {
                break; // Break early if characters don't match
            }
        }
        
        if (j == lenSub) {
            isRotation = true;
            break;
        }
    }

    if (isRotation) {
        cout << "The strings ARE rotations of each other." << endl;
    } else {
        cout << "The strings are NOT rotations of each other." << endl;
    }

    return 0;
}