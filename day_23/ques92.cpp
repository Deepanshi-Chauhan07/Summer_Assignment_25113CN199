// find maximum occuring character.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter the string"<<endl;
    getline(cin,str);
    char maxchar='\0';
    int maxcount=0;
    int freq[256]={0};
    for(char c:str){
        freq[c]++;
        if(freq[c]>maxcount){
            maxcount=freq[c];
            maxchar=c;
        }
    }
    cout<<"maximum occuring character:"<<maxchar<<"i.e."<<maxcount<<"times";
    return 0;
}