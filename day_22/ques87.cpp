// to find character frequency in a string.
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"enter the string:"<<endl;
    getline(cin,str);
    char ch='a';
    int freq=count(str.begin(),str.end(),ch);

    cout<<"frequency of a character is :"<<freq;
    return 0;
}