// to find string length without strlen().
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter the string :"<<endl;
    getline(cin , str);
    int len=0;
    for(int i=0;i<str[i]!='\0';i++){
        len++;
    }
    cout<<"length of string is: "<<len;
    return 0; 
}