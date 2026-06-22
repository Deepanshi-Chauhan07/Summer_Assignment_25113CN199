// to remove spaces from string.
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"enter the string:"<<endl;
    getline(cin,str);

    int writeIndex=0;
    for(int readIndex=0;readIndex<str.length();readIndex++){
        if(str[readIndex]!=' '){
            str[writeIndex]=str[readIndex];
            writeIndex++;
        }
    }
    str.resize(writeIndex);
    cout<<"string after removing spaces : "<<str;
    return 0;
}