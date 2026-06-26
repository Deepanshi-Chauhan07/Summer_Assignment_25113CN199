// to count vowels and consonants.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter the string:"<<endl;
    getline(cin,str);
    int count_vowel=0;
    int count_conso=0;
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        if(ch =='a' || ch =='e' || ch=='i' || ch=='o'|| ch=='u'|| ch=='A'|| ch=='E'|| ch=='I' || ch=='O' || ch=='U'){
            count_vowel++;
        }
        else if(ch==' '){
            continue;
        }
        else{
            count_conso++;
        }
    }

    cout<<"no. of vowels : "<<count_vowel<<endl;
    cout<<"no. of consonants : "<<count_conso<<endl;
    return 0;
}