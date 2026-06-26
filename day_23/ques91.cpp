// to check anagram strigs.
/*#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str1;
    cout<<"enter the string"<<endl;
    getline(cin,str1);

    string str2;
    cout<<"enter the string"<<endl;
    getline(cin,str2);

    if(str1.length()!=str2.length()){
        cout<<"strings are not anagram";
    }

    int freq[256]={9};
    bool isAnagram=true;
    for(int i=0;i<str1.length();i++){
        freq[(int) str1[i]]++;
        freq[(int) str2[i]]--;
    }
    for(int i=0;i<256;i++){
        if(freq[i]!=0){
            isAnagram=false;
            break;
        }
    }
    if(isAnagram){
        cout<<"the strings are anagram";
    }
    else{
        cout<<"not anagram strings";
    }
    return 0;
}*/

// optimised code
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str1;
    cout<<"enter the string"<<endl;
    getline(cin,str1);

    string str2;
    cout<<"enter the string"<<endl;
    getline(cin,str2);

    if(str1.length()!=str2.length()){
        cout<<"strings are not anagram";
    }
    sort(str1.begin(),str1.end());
     sort(str2.begin(),str2.end());

     if(str1==str2){
        cout<<"the strings are anagram";
     }
     else{
        cout<<"strings are not anagram";
     }
return 0;
}