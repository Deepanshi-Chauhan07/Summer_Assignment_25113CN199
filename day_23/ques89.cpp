// first non repeating character in a string
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter the string"<<endl;
    getline(cin,str);
    int freq[256]={0};
    for(char c :str){
        if(c!=' '){
        freq[c]++;
        }
    }
    char result='\0';
    for(char c:str){
        if(c!=' ' && freq[c]==1){
            result=c;
            break;
        }
    }
    if(result!='\0'){
        cout<<"first non repeating character is: " <<result;
    }
    else{
        cout<<"all are repeating characters";
    }

    return 0;
}