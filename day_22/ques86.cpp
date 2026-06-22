// to count words in a string.
#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string str;
    cout<<"enter the string:"<<endl;
    getline(cin,str);

    int count=0;
    stringstream ss(str);
    string word;
    while(ss>>word){
        count++;
    }
    cout<<"no. of words in a string are: "<<count;
    return 0;
}