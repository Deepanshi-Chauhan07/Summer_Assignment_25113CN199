// to check palindrome string.
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"enter the string:"<<endl;
    getline(cin,str);
    bool isPalindrome=true;
    int left=0 , right=str.length()-1;
    while(left<right){
        if(str[left]!=str[right]){
            isPalindrome=false;
            break;
        }
        left++,right--;
    }
    if(isPalindrome){
        cout<<"enterd string is palindrome";
    }
    else{
        cout<<"not a palindrome string";
    }
    return 0;
}