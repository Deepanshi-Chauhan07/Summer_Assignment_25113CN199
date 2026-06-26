// to convert lowercase to uppercase.
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"enter the string:"<<endl;
    getline(cin,str);
    
    transform(str.begin(),str.end(), str.begin(),::toupper);

    cout<<"string after transformation is:"<<endl;
    cout<<str;

    return 0;

}